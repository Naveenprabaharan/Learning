import random
suits = ('Hearts', 'Diamonds', 'Spades', 'Clubs')
ranks = ('Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine', 'Ten', 'Jack', 'Queen', 'King', 'Ace')
values = {'Two':2, 'Three':3, 'Four':4, 'Five':5, 'Six':6, 'Seven':7, 'Eight':8, 'Nine':9, 'Ten':10, 'Jack':10,
         'Queen':10, 'King':10, 'Ace':11}
Playing=True

class Card:
    def __init__(self,suit,rank):
        self.suit = suit
        self.rank = rank

    def __str__(self):
        return self.rank + ' of ' + self.suit


class Deck():
    def __init__(self):
        self.deck = []
        for suit in suits:
            for rank in ranks:
                self.deck.append(Card(suit, rank))

    def __str__(self):
        deck_comp = ''
        for card in self.deck:
            deck_comp += '\n'+card.__str__()
        return "deck card has: " + deck_comp

    def shuffle(self):
        random.shuffle(self.deck)

    def deal(self):
        single_card = self.deck.pop()
        return single_card



class Hand():
    def __init__(self):
        self.cards=[]
        self.value=0
        self.aces=0

    def add_card(self,card):
        self.cards.append(card)
        self.value += values[card.rank]

        if self.cards=="Ace":
            self.aces += 1

    def check_for_ace(self):
        while self.value > 21 and self.aces>0:
            self.value -=10
            self.aces -=1


class Chips():

    def __init__(self,total=100):
        self.total= 100
        self.bet = 0

    def win_bet(self):
        self.total += self.bet

    def loose_bet(self):
        self.total -= self.bet



def take_bet(chips):

    while True:
        try:
            chips.bet=int(input('how much do you want bet for the match: '))

        except ValueError:
            print('please provide a integer value')

        except:
            if chips.bet > self.total:
                print(f'you do not have that much money!!! you have{self.total}')

        else:
            break


def hit(deck,hand):
    hand.add_card(deck.deal())
    hand.check_for_ace()


def hit_or_stand(deck,hand):
    global playing

    while True:

        x=input('Do you want Hit or Stand....(h\s): ')

        if x[0].lower()=='h':
            hit(deck,hand)
        elif x[0].lower()=='s':
            print('player stand')
        else:
            print('sorry, please try agin!!! ')
            continue
        break


def show_some(player, dealer):
    print("\nDealer's Hand:")
    print(" <card hidden>")
    print('', dealer.cards[1])
    print("\nPlayer's Hand:", *player.cards, sep='\n ')


def show_all(player, dealer):
    print("\nDealer's Hand:", *dealer.cards, sep='\n ')
    print("Dealer's Hand =", dealer.value)
    print("\nPlayer's Hand:", *player.cards, sep='\n ')
    print("Player's Hand =", player.value)

def player_win(player,dealer,chips):
    print('player win!')
    chips.win_bet()

def player_Busted(player,dealer,chips):
    print('player BUSTED!')
    chips.loose_bet()

def dealer_Busted(player,dealer,chips):
    print('Dealer Buseted!!')
    chips.loose_bet()

def dealer_win(player,dealer,chips):
    print('dealer Win!!')
    chips.loose_bet()

def push(player,dealer):
    print('player and deal are TIE!!!!')


while True:
    deck=Deck()
    deck.shuffle()

    player_hand=Hand()
    player_hand.add_card(deck.deal())
    player_hand.add_card((deck.deal()))

    dealer_hand=Hand()
    dealer_hand.add_card(deck.deal())
    dealer_hand.add_card(deck.deal())

    player_chips=Chips()
    take_bet(player_chips)

    show_some(player_hand,dealer_hand)

    while Playing:
        hit_or_stand(deck,player_hand)
        show_some(player_hand,dealer_hand)
        if player_hand.value > 21:
            player_Busted(player_hand,dealer_hand,player_chips)
            break

    if player_hand.value < 21:
        while dealer_hand.value< 17:
            hit(deck,dealer_hand)

        show_all(player_hand,dealer_hand,player_chips)

        if dealer_hand.value>21:
            dealer_Busted(player_hand,dealer_hand,player_chips)

        elif player_hand.value < dealer_hand.value:
            player_win(player_hand,dealer_hand,player_chips)

        elif player_hand.value > dealer_hand.value:
            dealer_win(player_hand,dealer_hand,player_chips)

        else:
            push(player_hand,dealer_hand)

    show_all(player_hand,dealer_hand)


    new_game=input('do you want to play again? (y\n)')
    if new_game[0]=='y':
        Playing=True
        continue
    else:
        print('thanks for playing!!!')
        break


