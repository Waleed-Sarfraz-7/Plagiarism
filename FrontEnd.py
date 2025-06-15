import pygame
import sys
from deck import Deck
from Tableau import Tableau

pygame.init()

# Screen dimensions and setup
width, height = 1200, 650
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption('Solitaire Game')

column_positions = [(50 + i * 100, 150) for i in range(7)]

# Initialize deck and tableau
deck = Deck()  # Assumes Deck has been implemented with a Deal method
tableau = Tableau(column_positions)
tableau.InitializeTableau(deck)

selected_col_index = None
selected_card = None
dragging = False

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
            tableau.render_tableau(screen)
        elif event.type == pygame.MOUSEBUTTONDOWN:
            selected_col_index, selected_card = tableau.detect_card_click(event)
            if selected_card and selected_card.FaceUp:
                dragging = True  # Start dragging if the card is face-up
            tableau.render_tableau(screen)
        elif event.type == pygame.MOUSEBUTTONUP and dragging:
            mouse_x, mouse_y = event.pos
            valid_move = False
            tableau.render_tableau(screen)
            # Check each column (pile) to see if the card is dropped on a valid pile
            for col_index in range(len(tableau.Piles)):
                x, y = tableau.column_position[col_index]
                pile_rect = pygame.Rect(x, y, 100, 500)  # Rect for each pile area
                if pile_rect.collidepoint(mouse_x, mouse_y):  # If mouse is over pile area
                    # Move the card to the new pile if the move is valid
                    valid_move = tableau.move_card(selected_col_index, col_index, selected_card)
                    if valid_move:
                        print(f"Moved card from pile {selected_col_index} to pile {col_index}")
                        break
                tableau.render_tableau(screen)

            # Reset dragging state after the move
            dragging = False
            selected_col_index = None
            selected_card = None

    # Draw background
    screen.fill((34, 139, 34))  # Dark green (tableau background)

    # Draw tableau
    tableau.render_tableau(screen)

    # If dragging, render the selected card at the mouse position
    if dragging and selected_card:
        mouse_x, mouse_y = pygame.mouse.get_pos()
        if selected_card.FaceUp:
            screen.blit(selected_card.Image, (mouse_x, mouse_y))  # Render the card where the mouse is

    # Update the display
    pygame.display.flip()

# Clean up
pygame.quit()
sys.exit()