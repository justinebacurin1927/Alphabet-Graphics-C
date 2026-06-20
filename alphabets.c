#include <iostream>
#include <graphics.h>
#include <stdio.h>
extern "C" void delay(int);


using namespace std;


int main()
{
    int gd = DETECT, gm;        // <-- this declares gd and gm, must come first
    initgraph(&gd, &gm, "");
    setbkcolor(BLACK);
    cleardevice();
    setcolor(WHITE);

    // capital A
    setfillstyle (10, 2);
    floodfill (2, 12, BLACK);
    line (15, 26, 15, 65); //vertical left
    line (35, 52, 30, 65); //diagonal na maliit left
    line (40, 52, 45, 65); //diagonal na maliit right
    line (60, 26, 60, 65); //vertical eight
    arc (38, 26, 0, 180, 23); //upper
    arc (23, 65, 180, 0, 8); //arc lower left
    arc (53, 65, 180, 0, 8); //arc lower right
    arc (38, 54, 0, 180, 5); //arc lower center


    circle (38, 32, 8); //center


    // small a

    line (120, 26, 120, 65); //vertical right
    line (105, 55, 105, 65); //vertical na maliit sa baba
    line (105, 26, 105, 42); //vertical left
    line (90, 26, 80, 26); //horizontal sa tail
    line (90, 37, 105, 37); //horizontal upper connected sa vertical
    arc (100, 26, 0, 180, 20);
    arc (98, 26, 0, 180, 8);
    arc (90, 52, 265, 0, 15); //arc sa ilalim connected para sa evertical
    arc (90, 37, 350, 0, 15); //arc sa taas
    arc (113, 65, 180, 0, 7);
    circle (90, 52, 7);
    ellipse (90, 52, 90, 260, 20, 15); //ellipse left

    // capital B

    line (150, 13, 150, 65); //vertical left
    line (150, 13, 170, 13); //horizontal upper
    line (150, 65, 173, 65); //horizontal lower
    line (162, 20, 162, 33); //vertical inner upper
    line (162, 45, 162, 58); //vertical inner lower
    arc (163, 27, 290, 90, 7); //inner ellipse sa upper
    arc (163, 52, 290, 90, 7); // lower naman to sa inner
    ellipse (170, 27, 280, 90, 24, 14); //upper
    ellipse (170, 53, 280, 90, 24, 14); //lower

    // small b

    arc (208, 13, 0, 180, 8); //arr upper
    line (200, 13, 200, 65); //vertical left
    line (215, 13, 215, 37); //vertical righy
    line (200, 65, 223, 65); //horizontal lower
    line (215, 37, 226, 37); //horizontal center
    line (217, 47, 217, 55); //vertical inner
    ellipse (213, 51, 290, 60, 30, 15); //
    ellipse (213, 51, 290, 60, 15, 5);

    // capital C

    line (305, 7, 315, 7); //horizontal upper
    line (305, 24, 315, 24); //horizontal upper (2)
    line (300, 53, 315, 53); //horizontal lower
    line (300, 69, 315, 69); //horizontal lower (2)
    arc (305, 39, 90, 260, 32);
    arc (305, 39, 90, 260, 16);
    arc (315, 16, 260, 90, 9);
    arc (315, 61, 260, 90, 9);

    // small c

    line (355, 19, 365, 19); //horizontal upper
    line (355, 34, 365, 34); //horizontal upper (2)
    line (355, 52, 365, 52); //horizontal lower
    line (352, 69, 365, 69); //horizontal lower (2)
    arc (366, 27, 260, 90, 9);
    arc (366, 60, 260, 90, 9);
    arc (355, 44, 90, 260, 25);
    arc (355, 44, 90, 260, 10);

    // capital D

    line (400, 10, 400, 70); //vertical outer
    line (410, 25, 410, 53); //vertical inner
    line (400, 10, 412, 10); //horizontal top
    line (400, 70, 405, 70); //horizontal bot
    arc (413, 40, 260, 90, 30);
    arc (413, 40, 260, 90, 15);

    // small d

    arc (480, 13, 0, 180, 5); //horizontal upper
    line (485, 13, 485, 65); //vertical right
    line (472, 66, 485, 66); //horizontal lower
    line (475, 13, 475, 39); //vertical left
    line (473, 48, 473, 58); //vertical inner
    ellipse (473, 53, 90, 260, 10, 6);
    ellipse (476, 53, 90, 260, 25, 15);

    // capital E

    line (515, 13, 515, 65); //vertical left
    line (515, 13, 545, 13); //horizontal upper
    arc (546, 18, 260, 90, 5); //arc (1)
    line (515, 65, 545, 65); //horzontal lower
    line (530, 23, 545, 23); //horizontal (1)
    line (530, 23, 530, 35); //vertical (2)
    arc (545, 39, 260, 90, 4); //arc (3)
    line (530, 35, 545, 35); //horizontal (2)
    line (530, 43, 545, 43); //horziontal (3)
    line (530, 45, 530, 52); //vertical (4)
    arc (545, 61, 260, 90, 5); //arc (5)
    line (530, 55, 545, 55); //horizontal (4)

    // small e

    line (580, 50, 595, 50); //horizontal upper
    line (580, 56, 593, 56); //horizontal lower
    line (575, 45, 588, 45);// horizontal inner
    arc (580, 50, 355, 330, 17); //arc
    arc (580, 54, 90, 260, 4); //pampasara sa dalawang horizontal
    ellipse (582, 45, 0, 180, 7, 5); //ellipse sa inner

    // capital F

    line (15, 91, 58, 91); //horizontal upper
    line (15, 91, 15, 143); //vertical left
    line (30, 127, 30, 143); //vertical right lower
    line (30, 120, 45, 120); //horizontal center upper
    line (30, 127, 45, 127); //horizontal center lower
    line (30, 104, 30, 120); //vertical right upper
    line (30, 104, 58, 104); //horizontal upper lower
    arc (58, 97, 260, 100, 7); //arc upper
    arc (44, 125, 260, 100, 4); //arc center
    arc (23, 143, 180, 0, 7); //arc lower


    // small f

    ellipse (90, 110, 0, 180, 10, 10); //ellipse upper right
    ellipse (90, 110, 0, 180, 20, 15); //ellipse upper left
    line (70, 109, 70, 120); //vertical right upper
    line (80, 109, 80, 120); //verical left upper
    line (60, 120, 70, 120); //horizontal left upper
    line (80, 120, 90, 120); //horizontal right upper
    arc (60, 124, 90, 260, 5); //arc left
    arc (90, 124, 260, 90, 5); //arc right
    line (80, 127, 90, 127); //horizontal right center
    line (60, 127, 70, 127); //hoirzontal left center
    arc (105, 109, 180, 0, 5); //arc on ellipse
    line (70, 127, 70, 143); //vertical left lower
    line (80, 127, 80, 143); //vertical right lower
    arc (75, 143, 180, 0, 5); //arc lower

    // capital G

    line (170, 117, 198, 117); //horizontal upper
    line (170, 123, 187, 123); //horizontal lower
    arc (170, 117, 60, 360, 30);
    arc (170, 117, 60, 340, 20);
    arc (170, 120, 90, 260, 4); //arc center
    arc (185, 100, 190,  90, 6); //arc sa taas

    // small g

    arc (230, 110, 40, 330, 15); //circle
    arc (245, 90, 0, 190, 5); //arc sa taas
    line (240, 90, 240, 100); //vertical left
    line (241, 120, 241, 135); //vertical left (2)
    line (250, 90, 250, 142); //vertical right
    arc (225, 136, 0, 180, 5); //arc sa tail
    arc (236, 140, 180, 0, 15); //malaking u
    arc (235, 137, 180, 0, 7); //maliit na u
    circle (230, 110, 7); //inner circle

    // capital H

    line (270, 91, 270, 143); //vertical left
    line (285, 127, 285, 143); //vertical left rightside lower
    line (285, 127, 300, 127); //horizontal center lower
    line (285, 91, 285, 114); //vertical left rightside upper
    line (285, 114, 300, 114); //horizontal center upper
    line (300, 91, 300, 114); //vertical right leftside upper
    line (300, 127, 300, 143); //vertical right leftside lower
    line (315, 91, 315, 143); //vertical right
    arc (278, 91, 0, 180, 8);  //arc na maliit sa taas (left)
    arc (278, 143, 180, 0, 8); //arc na maliit sa baba (left)
    arc (308, 143, 180, 0, 8); //arc na maliit sa baba (right)
    arc (308, 91, 0, 180, 8); // arc na maliit sa taas (right)

    // small h

    line (330, 91, 330, 143); //vertical sa left pinaka mahaba
    line (375, 120, 375, 143); //vertical sa right mahaba
    line (360, 143, 360, 136); //maliit na vertical sa baba
    line (345, 91, 345, 117); //vertical sa left
    line (347, 143, 347, 135); //extension
    arc (338, 91, 0, 180, 8); //arc sa left taas
    arc (338, 143, 180, 0, 8); //arc sa left baba
    arc (355, 136, 0, 180, 7); //sa baba to
    arc (368, 143, 180, 0, 8); //arc sa baba, right
    ellipse (360, 120, 0, 180, 15, 12); //sa taas to


    // capital I

    line (395, 91, 440, 91); //horizontal pinaka taas
    line (395, 101, 410, 101); //horizonta maliit sa left
    line (425, 101, 440, 101); //horizontal maliit right
    line (410, 101, 410, 130); //vertical malaki ng left
    line (425, 101, 425, 130); //vertical malaki ng right
    line (395, 130, 410, 130); //horizontal mallit sa baba left
    line (425, 130, 440, 130); //horizontal maliit sa baba right
    line (395, 143, 440, 143); //horizontal pinaka baba
    arc (395, 137, 90, 260, 7); //arc maliit sa baba left
    arc (437, 137, 260, 90, 7); //arc maliit sa baba right
    arc (395, 97, 90, 260, 6); //arc maliit sa taas left
    arc (440, 97, 260, 90, 6); //arc maliit sa taas right

    // small i

    arc (473, 117, 0, 180, 7); //arc taas
    arc (473, 143, 180, 0, 7); //arc baba
    line (465, 117, 465, 143); // vertical left
    line (480, 117, 480, 143); //vertical right
    circle (473, 95, 8); //tuldok

    // capital J

    line (539, 91, 539, 130); //vertical left
    line (554, 91, 554, 130); //vertical right
    arc (513, 129, 0, 180, 8); //arc sa tail
    arc (547, 91, 0, 180, 8); //arc sa taas
    arc (530, 130, 180, 0, 25); //malaking u
    arc (530, 130, 180, 0, 10); // maliit na u

    // small j

    arc (600, 115, 0, 180, 6); //arc sa taas
    line (594, 115, 594, 135); //vertical left
    line (604, 115, 604, 135); //vertical right
    arc (571, 135, 0, 180, 6); //arc sa tail
    arc (585, 135, 180, 0, 20); //malaking u
    arc (585, 135, 180, 0, 10); // maliit na u
    circle (600, 101, 6); //tuldok

    // capital K

    line (15, 169, 15, 221); //vertical sa left side
    line (30, 169, 30, 192); //vertical na maliit sa taas right
    line (30, 197, 30, 221); // vertical na maliit sa baba right
    line (30, 192, 45, 169); //diagonal sa taas upper
    line (45, 195, 60, 169); // diagonal sa baba upper
    line (30, 195, 45, 221); //diagonal sa taas lower
    line (45, 195, 60, 221); //diagonal sa baba lower
    arc (23, 169, 0, 180, 8); //arc sa taas
    arc (23, 221, 180, 0, 8); //arc sa baba
    arc (53, 169, 0, 180, 8); // arc tail ng diagonals
    arc (53, 221, 180, 0, 8); //arc tail ng diagonals lower



    // small k

    line (75, 182, 75, 221); //vertical sa left side
    line (90, 182, 90, 195); //vertical na maliit sa taas right
    line (90, 208, 90, 221); // vertical na maliit sa baba right
    line (90, 195, 105, 182); //diagonal sa taas upper
    line (93, 200, 120, 182); // diagonal sa baba upper
    line (93, 200, 120, 221); //diagonal sa taas lower
    line (90, 208, 105, 221); //diagonal sa baba lower
    arc (83, 221, 180, 0, 8); //arc sa baba
    arc (83, 182, 0, 180, 8); //arc sa taas
    ellipse (113, 182, 0, 180, 8, 5); //ellipse tail ng diagonals
    ellipse (113, 221, 180, 0, 8, 5); //ellipse tail ng diagonals lower

    // capital L

    arc (143, 169, 0, 180, 8); //arc sa taas
    line (135, 169, 135, 221); // vertical sa left
    line (150, 169, 150, 208); // vertical sa right
    line (150, 208, 180, 208); //horizontal sa right
    arc (180, 214, 260, 90, 7); // arc na maliit
    line (135, 221, 180, 221); //horizontal sa baba

    // small l

    arc (203, 169, 0, 180, 8); //horizontal upper part
    line (195, 169, 195, 221); //vertical sa left
    line (210, 169, 210, 221); //vertical sa right
    arc (203, 221, 180, 0, 8); //horizontal sa lower

    // capital M

    arc (248, 169, 0, 180, 8); //arc sa taas left side
    arc (248, 221, 180, 0, 8); //horizontal sa baba left side
    arc (293, 169, 0, 180, 8); //arc sa taas right side
    arc (293, 221, 180, 0, 8); //horizontal sa baba right side
    ellipse (270, 198, 180, 0, 13, 10); // ellipse sa baba center
    line (240, 169, 240, 221); // vertical left side
    line (285, 195, 285, 221); //vertical na maliit sa baba right
    line (255, 195, 255, 221); //vertical na maliit sa baba left
    line (300, 169, 300, 221); // vertical right side
    line (270, 185, 285, 169); //diagonal right side sa upper
    line (255, 169, 270, 185); //diagonal left side sa upper

    // small m

    ellipse (330, 200, 0, 115, 14, 10); //ellipse left upper
    ellipse (355, 200, 0, 180, 14, 10); //ellipse right upper
    ellipse (330, 210, 0, 180, 6, 5); //ellipse left lower
    ellipse (355, 210, 0, 180, 6, 5); //lelipse right lower
    line (325, 209, 325, 221); //vertical left side lower
    line (325, 190, 325, 185); //vertical na maliit sa left upper
    line (337, 210, 337, 221); //vertical center (1)
    line (347, 210, 347, 221); //vertical center (2)
    line (359, 210, 359, 221); //vertical right side
    line (368, 200, 368, 221); //vertical right side (2)
    line (315, 185, 315, 221); //vertical left
    arc (320, 185, 0, 180, 5); //arc upper pinaka taas
    arc (320, 221, 180, 0, 5); //arc sa left baba
    arc (342, 221, 180, 0, 6); //arc sa center baba
    arc (364, 221, 180, 0, 5); //arc sa right baba

    // capital N

    arc (403, 169, 0, 180, 7); //arc left side upper
    arc (403, 221, 180, 0, 7); //arc left side lower
    arc (443, 221, 180, 0, 8); //arc right side lower
    arc (443, 169, 0, 180, 8); //arc right side upper
    line (395, 169, 395, 221); //vertical left side
    line (410, 195, 410, 221); // maliit na vertical left side
    line (410, 169, 435, 200); //diagonal upper
    line (410, 195, 435, 221); //diagonal lower
    line (450, 169, 450, 221); //vertical right side
    line (435, 169, 435, 200); //maliit na vertical right side

    // small n

    arc (473, 182, 0, 180, 8); //horizontal upper
    arc (473, 221, 180, 0, 8); //horizontal lower
    arc (504, 221, 180, 0, 7); //horizontal lower right

    line (480, 182, 480, 194); //tail
    line (465, 182, 465, 221); //vertical left side
    line (480, 205, 480, 221); //vertical left side (2)
    line (497, 205, 497, 221); // vertical right side (2)
    line (510, 195, 510, 221); // vertical right side

    ellipse (495, 195, 0, 180, 15, 12); //bridge
    arc (489, 208, 0, 180, 9);  // lower bridge

    // capital O

    circle (555, 200, 30);
    circle (555, 200, 15);

    // small o

    circle (615, 210, 20);
    circle (615, 210, 10);

    // capital P

    line (15, 247, 15, 299); //vertical uleft side
    line (30, 273, 30, 299); //verical right side
    line (30, 272, 40, 272); // horizontal center
    line (15, 247, 45, 247); //horizontal upper
    line (30, 253, 30, 265); //inner vertical
    arc (23, 299, 180, 0, 8); // arc lower
    ellipse (45, 260, 260, 90, 25, 13); //half ellipse
    ellipse (33, 260, 260, 90, 12, 7); //inner elli[se

    // small p

    line (75, 260, 75, 297); //vertical uleft side
    line (92, 286, 92, 299); //verical right side
    line (75, 260, 98, 260); //horizontal upper
    line (92, 268, 92, 280);
    arc (84, 299, 180, 0, 8); // horizontal lower
    ellipse (98, 273, 260, 90, 25, 13); //half ellipse
    ellipse (95, 273, 260, 90, 12, 7); //inner ellipse

    // capital Q

    arc (155, 273, 0, 310, 25); //big circle
    arc (155, 273, 0, 360, 10);
    arc (187, 298, 200, 70, 8); // arc lower
    line (180, 280, 180, 273); //connecting line
    line (170, 290, 180, 300); //diagonal lower
    line (180, 280, 190, 290);//diagonal upper

    // small q

    arc (205, 270, 90, 260, 15);
    arc (205, 270, 90, 260, 5);
    arc (215, 299, 180, 0, 5); //arc sa baba
    line (205, 265, 210, 265); //horizontal sa loob upper
    line (205, 275, 210, 275); //horizontal sa loob lower
    line (210, 265, 210, 275); //veritcal sa loob
    line (203, 285, 210, 285); //horizontal na maliit
    line (205, 255, 220 ,255); //horizontal sa taas
    line (220, 255, 220, 299); //vertical sa right
    line (210, 285, 210, 299);//vertical sa left

    // capital R

    line (270, 247, 270, 299); //vertical left
    line (285, 246, 295, 246);
    line (285, 299, 285, 285); //vertical lower
    line (285, 285, 300, 299); //diagonal lower
    line (290, 274, 315, 299); //diagonal upper
    line (285, 254, 285, 266); //vertical sa loob
    arc (308, 299, 200, 70, 7); //arc sa baba
    arc (278, 247, 0, 180, 8); //horizontal upper
    arc (278, 299, 180, 0, 8); //arc lower
    ellipse (295, 260, 260, 100, 25, 14);
    ellipse (290, 260, 260, 100, 12, 6);

    // small r

    line (330, 265, 330, 299); //vertical left
    line (345, 278, 360, 278); //horizontal upper
    line (345, 278, 345, 299); //vertical
    line (345, 265, 345, 270); //vertical upper maliit
    line (345, 270, 360, 270); //horizontal lower
    arc (360, 274, 260, 90, 5); //tail sa vertical
    arc (338, 299, 180, 0, 8); //arc lower
    arc (338, 265, 0, 180, 8); //arc upper

    // capital S

    ellipse (410, 263, 90, 260, 30, 15); //upper (A)
    ellipse (415, 283, 260, 90, 30, 15); //lower (B)
    ellipse (415, 263, 90, 260, 15, 5); //upper (B)
    ellipse (405, 282, 260, 90, 15, 5); //lower (A)
    arc (390, 292, 90, 260, 5); //arc lower
    arc (425, 253, 260, 90, 5); //arc upper
    line (410, 248, 425, 248); //horizontal upper
    line (410, 258, 425, 258); // horizontal upper (2)
    line (410, 286, 390, 286); //horizontal lower
    line (410, 297, 390, 297); //horizontal lower (2)

    // small s

    ellipse (473, 275, 90, 260, 25, 10); //upper (A)
    ellipse (478, 290, 260, 90, 25, 10); //lower (B)
    ellipse (478, 275, 90, 260, 10, 5); //upper (B)
    ellipse (466, 289, 260, 90, 10, 5); //lower (A)
    line (472, 265, 487, 265); //horizontal upper
    line (477, 271, 487, 271); // horizontal upper (2)
    arc (487, 268, 260, 90, 4); //arc upper
    line (467, 293, 453, 293); //horizontal lower
    line (475, 299, 453, 299); //horizontal lower (2)
    arc (453, 296, 90, 260, 4); //arc lower

    // capital T

    line (510, 247, 555, 247); //horizontal upper
    line (510, 260, 525, 260); //horizontal maliit left
    line (540, 260, 555, 260); //hoirzontal maliit right
    line (525, 260, 525, 299); //verical center
    line (540, 260, 540, 299); //vertical center (2)
    arc (510, 254, 90, 260, 7); //arc maliit left
    arc (533, 299, 180, 0, 8); //arc lower
    arc (555, 254, 260, 90, 7); //arc maliit right


    // small t

    arc (578, 247, 0, 180, 8); //arc upper
    arc (578, 299, 180, 0, 8); //arc lower
    arc (555, 280, 90, 260, 8); //arc left
    arc (600, 280, 260, 90, 8); //arc right
    line (555, 273, 570, 273); //horizontal upper left
    line (585, 273, 600, 273); //horizontal upper right
    line (570, 247, 570, 273); //vertical left upper
    line (585, 247, 585, 273); //vertical right upper
    line (555, 286, 570, 286); //horizontal lower left
    line (585, 286, 600, 286); //horizonta lower right
    line (570, 286, 570, 299); //vertical left lower
    line (585, 286, 585, 299); //vertical right lower

    // capital U

    line (15, 325, 15, 364); //vertical left
    line (30, 325, 30, 364); //vertical right
    line (45, 325, 45, 364); //vertical left (2)
    line (60, 325, 60, 364); //vertical right (2)
    arc (38, 364, 180, 0, 8); //maliit
    arc (38, 364, 180, 0, 23); //malaki
    arc (23, 325, 0, 180, 8); //arc upper left
    arc (53, 325, 0, 180, 8); //arc upper right

    // small u

    line (75, 338, 75, 364); //vertical left
    line (90, 338, 90, 364); //vertical right
    line (105, 338, 105, 364); //vertical left (2)
    line (120, 338, 120, 364); //vertical right (2)
    arc (98, 364, 180, 0, 8); //maliit
    arc (98, 364, 180, 0, 23); //malaki
    arc (83, 338, 0, 180, 8); //horizontal upper left
    arc (113, 338, 0, 180, 8); //horizontal upper right


    // capital V

    line (150, 325, 170, 377); //diagonal left
    line (165, 325, 180, 364); //diagonal right
    line (195, 325, 180, 364); //diagonal left (1)
    line (210, 325, 190, 377); //diagonal right (2)
    arc (180, 377, 180, 0, 10); //arc lower
    arc (157, 325, 0, 180, 8); //arc upper left
    arc (203, 325, 0, 180, 8); //arc upper right

    // small v


    line (210, 341, 225, 377); //diagonal left
    line (225, 341, 232, 364); //diagonal right
    line (240, 341, 230, 364); //diagonal left (1)
    line (255, 341, 240, 377); //diagonal right (2)
    arc (233, 377, 180, 0, 8); //arc lower
    arc (218, 341, 0, 180, 8); //arc upper left
    arc (248, 341, 0, 180, 8); //arc upper right

     // capital W

    line (270, 325, 300, 377); //diagonal left
    line (285, 325, 305, 355); //diagonal right
    line (310, 348, 305, 355); //diagonal left maliit
    line (320, 348, 325, 355); //diagonal right maliit
    line (345, 325, 325, 355); //diagonal right (2)
    line (360, 325, 326, 377); //diagonal right (2)
    line (310, 377, 315, 370); //diagonal lower left
    line (320, 377, 315, 370); //diagonal lower right
    arc (315, 350, 0, 180, 5); //arc center
    arc (278, 325, 0, 180, 8); //arc left
    arc (354, 325, 0, 180, 8); //arc right
    arc (305, 377, 180, 0, 5); //arc lower left
    arc (325, 377,  180, 0, 3); //arc lower right



    // small w

    line (360, 341, 375, 377); //diagonal left
    line (375, 341, 385, 364); //diagonal right
    line (385, 364, 390, 350); //diagonal left maliit
    line (395, 350, 400, 364); //diagonal right maliit
    line (390, 350, 395, 350); //line center
    line (405, 341, 400, 364); //diagonal left (2)
    line (420, 341, 410, 377); //diagonal right (2)
    line (385, 377, 390, 370); //diagonal lower left
    line (400, 377, 395, 370); //diagonal lower right
    arc (393, 370, 0, 180, 3);
    arc (367, 341, 0, 180, 8); //arc left
    arc (413, 341, 0, 180, 8); //arc right
    arc (380, 377, 180, 0, 5); //arc lower left
    arc (405, 377, 180, 0, 5); //arc lower right

    // capital X

    line (450, 325, 465, 341); //diagonal upper left
    line (480, 325, 465, 341); //diagonal upper right
    line (450, 377, 465, 360); //diagonal lower left
    line (480, 377, 465, 360); //diagonal lower right
    line (435, 325, 455, 345); //diagonal left upper
    line (435, 377, 455, 348); //diagonal left lower
    line (495, 325, 475, 345); //diagonal right upper
    line (495, 377, 473, 348); //diagonal right lower
    arc (443, 325, 0, 180, 8); //arc upper left
    arc (488, 325, 0, 180, 8); //arc upper right
    arc(443, 377, 180, 0, 8); //arc lower left
    arc (488, 377, 180, 0, 8); //arc lower right

    // small x

    line (525, 341, 533, 350); //diagonal upper left
    line (540, 341, 533, 350); //diagonal upper right
    line (525, 377, 533, 368); //diagonal lower left
    line (540, 377, 533, 368); //diagonal lower right
    line (510, 341, 523, 360); //diagonal left upper
    line (510, 377, 523, 360); //diagonal left lower
    line (555, 341, 543, 360); //diagonal right upper
    line (555, 377, 543, 360); //diagonal right lower
    arc (518, 341, 0, 180, 8); //arc upper left
    arc (548, 341, 0, 180, 8); //arc upper right
    arc (518, 377, 180, 0, 8); //arc lower left
    arc (548, 377, 180, 0, 8); //arc lower right

    // capital Y

    line (195, 403, 212, 420); //diagonal inner left
    line (225, 403, 212, 420); //diagonal inner right
    line (180, 403, 205, 429); //diagonal outer left
    line (240, 403, 220, 429); //diagonal outer right
    line (205, 429, 205, 468); //vertical left
    line (220, 429, 220, 468); //vertical right
    arc (213, 468, 180, 0, 8); //arc lower
    arc (188, 403, 0, 180, 8); //arc upper left
    arc (233, 403, 0, 180, 8); //arc upper right

     // small y

    line (255, 429, 268, 450); //diagonal sa upper left
    line (300, 429, 270, 468); //diagonal sa righy
    line (270, 429, 275, 440); //diagonal inner left
    line (285, 429, 275, 440); //diagonal inner right
    line (255, 468, 268, 450); //diagonal sa lower left
    arc (263, 468, 180, 0, 8); // arc sa bottom
    arc (263, 429, 0, 180, 8); //arc upper left
    arc (293, 429, 0, 180, 8); //arc upper right

    // capital Z

    line (315, 403, 390, 403); //horizontal upper
    line (315, 416, 360, 416); //horizontal upper left
    line (360, 416, 315, 455); //diagonal left
    line (390, 403, 345, 455); //diagonal right
    line (345, 455, 390, 455); //horizonal lower right
    line (315, 468, 390, 468); //horizontal lower
    arc (315, 410, 90, 260, 7); //arc upper left
    arc (315, 462, 90, 260, 7); //arc lower left
    arc (390, 462, 260, 90, 7); //arc lower right

    // small z

    line (405, 429, 440, 429); //horizontal upper
    line (405, 442, 420, 442); //horizontal upper left
    line (420, 442, 405, 455); //diagonal left
    line (440, 429, 425, 455); //diagonal right
    line (425, 455, 440, 455); //horizonal lower right
    line (405, 468, 440, 468); //horizontal lower
    arc (405, 436, 90, 260, 7); //arc upper left
    arc (405, 462, 90, 260, 7); //arc lower left
    arc (440, 462, 260, 90, 7); //arc lower right


    // end of alphabet

    getch();

    closegraph();

    return 0;
}



