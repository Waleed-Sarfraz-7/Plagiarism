from stack import Stack

class Foundation:
    def __init__(self):
        self.Piles = {
            'Heart': Stack(),
            'Diamond': Stack(),
            'Clubs': Stack(),
            'Spades': Stack()
        }

    def AddCard(self, card):
        pile = self.Piles[card.suit]
        if self.IsValidMove(card):
            pile.push(card)
            return True
        return False

    def IsValidMove(self, card):
        pile = self.Piles[card.suit]
        if pile.size() == 0:
            return card.rank == 'Ace'
        TopCard = pile.top()
        return self.IsNextInSequence(TopCard, card)

    def IsNextInSequence(self, TopCard, card):
        rank_order = ['Ace', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'Jack', 'Queen', 'King']
        TopCard_index = rank_order.index(TopCard.rank)
        card_index = rank_order.index(card.rank)
        return card_index == TopCard_index + 1

    def DisplayFoundation(self):
        for suit, pile in self.Piles.items():
            print(f"{suit.capitalize()} Pile:")
            pile.display_stack()

    def IsGameComplete(self):
        for suit, pile in self.Piles.items():
            if pile.size() != 13:
                return False
        return True
