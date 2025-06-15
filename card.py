import pygame
class Card:
    def __init__(self, Suits, Ranks,FaceUp=False):
        self.Ranks = Ranks
        self.Suits = Suits
        self.FaceUp = FaceUp
        self.Image = self.LoadImage()
        self.BackImage=self.LoadBackImage()
        self.color = 'red' if self.Suits in ['Heart', 'Diamond'] else 'black'
    def Flip(self):
        self.FaceUp = not self.FaceUp
    def LoadImage(self):
        ImagePath=f"Pictures/{self.Ranks}_of_{self.Suits}.png"
        image=pygame.image.load(ImagePath)
        resized=pygame.transform.scale(image, (80, 120))
        return resized
    def LoadBackImage(self):
        ImagePath=f"Pictures/BackImage.jpg"
        image=pygame.image.load(ImagePath)
        resized=pygame.transform.scale(image, (80, 120))
        return resized
    def Display(self):
        if self.FaceUp:
            return f"{self.Ranks} of {self.Suits}"
        else:
            return "Face down"
    def DisplayImage(self):
        return self.Image
    def DisplayCard(self, card, screen, position):
        if card.FaceUp:
            screen.blit(card.Image, position)
        else:
            screen.blit(card.BackImage, position)