import pygame
from stack import Stack
class Tableau:
    def __init__(self, column_position):
        # Initialize the tableau with 7 piles, each represented by a Stack
        self.Piles = [Stack() for _ in range(7)]
        self.column_position = column_position
        
    def InitializeTableau(self, deck):
        """Initialize the tableau with the cards dealt from the deck"""
        for i in range(7):  # 7 columns in the tableau
            for j in range(i + 1):  # Deal cards to each column
                card = deck.Deal()
                if card is None:
                    raise ValueError("Deck ran out of cards")
                if j == i:  # Only flip the last card in each pile
                    card.Flip()
                self.Piles[i].Push(card)

    def CanAddCard(self, to_pile, CardToAdd):
        if not to_pile:  # If the pile is empty, only a King can be added
            return CardToAdd.Ranks == 'K'
        
        top_card = to_pile.top()  # Get the top card from the pile
        opposite_color = CardToAdd.color != top_card.color
        RanksOrder = ["A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"]
        card_to_move_index = RanksOrder.index(CardToAdd.Ranks)
        top_card_index = RanksOrder.index(top_card.Ranks)
        correct_rank = (card_to_move_index + 1 == top_card_index)
        
        return opposite_color and correct_rank

    def DisplayTableau(self):
        """Display the tableau piles and their cards in the console"""
        for i, pile in enumerate(self.Piles):
            print(f"Pile {i + 1}:")
            pile.DisplayStack()

    def GetTopCard(self, PileIndex):
        """Get the top card of the pile at the given index"""
        return self.Piles[PileIndex].top()

    def MoveCardToFoundation(self, FromPileIndex, foundation):
        """Move a card from a tableau pile to the foundation"""
        FromPile = self.Piles[FromPileIndex]
        CardToMove = FromPile.top()

        if CardToMove and foundation.add_card(CardToMove):
            FromPile.Pop()
            NewTopCard = FromPile.top()
            if NewTopCard and not NewTopCard.FaceUp:
                NewTopCard.Flip()
            return True
        return False

    def render_tableau(self, screen):
        """Render the tableau on the screen using Pygame"""
        # Iterate through each pile (column) in the tableau
        for col_index in range(len(self.Piles)):
            pile = self.Piles[col_index]
            current = pile.Head  # Start from the top of the pile (linked list)

            # Positioning variables for each column
            x, y = self.column_position[col_index]  # Initial position for the column
            y_offset = 30  # Vertical spacing between cards

            # Traverse and draw each card in the pile
            i = 0
            while current:
                card = current.Data  # Access the card in the current node
                card_y = y + i * y_offset  # Calculate vertical position with offset
                # Render the card face-up or face-down
                card.DisplayCard(card, screen, (x, card_y))
                # Move to the next card in the stack
                current = current.Next
                i += 1

    def detect_card_click(self, event):
        """Detect when a card in the tableau is clicked"""
        if event.type == pygame.MOUSEBUTTONDOWN and event.button == 1:  # Left mouse button
            mouse_x, mouse_y = event.pos
            for col_index, pile in enumerate(self.Piles):
                current = pile.Head
                i = 0
                x, y = self.column_position[col_index]
                y_offset = 30
                while current:
                    card = current.Data
                    card_rect = pygame.Rect(x, y + i * y_offset, card.Image.get_width(), card.Image.get_height())
                    if card.FaceUp and card_rect.collidepoint(mouse_x, mouse_y):  # Only select face-up cards
                        return col_index, card  # Return the pile index and the card object
                    current = current.Next
                    i += 1
        return None, None

    def move_card(self, from_col_index, to_col_index, card):
        """Moves a card or set of cards from one pile to another if valid."""
        if from_col_index is None or to_col_index is None:
            return False
        from_pile = self.Piles[from_col_index]
        to_pile = self.Piles[to_col_index]
        # Check if the card can be added to the new pile
        if card and card.FaceUp and self.CanAddCard(to_pile, card):
            # If valid, remove the card (or set of cards) from the from_pile and push it to the to_pile
            cards_to_move = from_pile.RemoveFrom(card)
            
            
            if cards_to_move.Head:
                to_pile.PushStack(cards_to_move)
                new_top_card = from_pile.top()
                if from_pile is None:
                    from_pile.Head=None
                if new_top_card and not new_top_card.FaceUp:
                    new_top_card.Flip()
                # Ensure the top card of the destination pile is shown
                if to_pile.top() and not to_pile.top().FaceUp:
                    to_pile.top().Flip()

                return True
        return False