# URDL-Cipher
(Old Project) Software implementation of symmetric key cipher URDL invented by me

URDL Cipher - Simple symmetric key cipher that uses a keybased grid to encipher text. That grid uses directional pattern that will decide resulting ciphertext

## _Algorithm_
The key that is used for the cipher is fixed length key of 40 characters. Key that is used must have specific qualities for cipher to work. Qualities are:
- Every single character in latin alphabet once . (26 characters in total)
- All 10 digits of base 10
- Other 4 unique characters (Example: @ # $ ~) 

Resulting characters are placed in random to create a valid key. Example key:

_hn1!rj4i9da27gpzyolexcfk0bs3tw$58~6q@umv_

These characters are placed in 4 x 10 grid from left to right, from up to down

<img src="readMeImages\img1.png"></img>

Like this:

<img src="readMeImages\img2.png"></img>

To encipher plaintext (let's assume that "this is urdl cipher" is our plaintext) we need to move on the grid by directions _UP RIGHT DOWN LEFT_ (URDL) from current letter in the grid to the one you get after directional movement. If movement forces to go outside of grid then you have to move on the opposite side of the grid. Every other character like whitespace for example should be ignored (for maximum ciphertext quality, no whitespaces should be used anyway)

this is urdl cipher -> lnob u3 1!ve 54rnw!

To Decipher ciphertext back to plaintext, you move the opposite directions on the grid (_UP RIGHT DOWN LEFT_ -> _DOWN LEFT UP RIGHT_) and you get

lnob u3 1!ve 54rnw! -> this is urdl cipher 

## __Program__

First, you choose either default key or custom one. (Obviously, default one should be used only for demonstration of work)



Menu offers to encrypt, decrypt and randomly generate other key to use.




