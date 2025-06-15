from stack import Stack

class Stockpile:
    def __init__(self, deck):
        self.Cards = deck.Cards[:]
        self.DrawnCards = []
        self.CurrentDrawIndex = 0

    def DrawOneCard(self):
        if not self.Cards and self.DrawnCards:
            self.RecycleDrawnCards()

        if self.Cards:
            DrawnCard = self.Cards.pop(0)
            DrawnCard.flip()
            self.DrawnCards.append(DrawnCard)
            self.CurrentDrawIndex = len(self.DrawnCards) - 1
            return DrawnCard
        elif self.DrawnCards:
            self.CurrentDrawIndex = (self.CurrentDrawIndex + 1) % len(self.DrawnCards)
            return self.DrawnCards[self.CurrentDrawIndex]
        return None

    def RecycleDrawnCards(self):
        self.Cards = self.DrawnCards[:]
        self.DrawnCards = []
        self.CurrentDrawIndex = 0

    def MoveCardToTableau(self, tableau, pile_index):
        if not self.DrawnCards:
            return False

        CardToMove = self.DrawnCards[self.CurrentDrawIndex]
        if tableau.can_add_card(pile_index, CardToMove):
            self.DrawnCards.pop(self.CurrentDrawIndex)
            tableau.piles[pile_index].push(CardToMove)
            return True
        return False
