//
// Created by francesco on 14/05/18.
//

#include "Achievments.h"

Achievments::Achievments(Subject*hero):hero(hero),jump_block(0),killYellow(0),killGreen(0),point(0) {
    hero->Attach (this);
    SetAchievments ();
    LoadAch ();
    a=0;b=0;c=0;d=0;



}

Achievments::~Achievments() {
    hero->Detach (this);
}

void Achievments::SetAchievments() {
    text2.setPosition (50,50);
    text2.setColor (sf::Color::Transparent);
    sf::Font font;
    font.loadFromFile ("arial.ttf");
    text2.setFont (font);
    text2.setString ("");
}


void Achievments::Modify(int ky, int j,int p,int kg) {
    killYellow=ky;
    jump_block=j;
    point=p;
    killGreen=kg;
    Display ();
}


void Achievments::LoadAch(){
    std::ifstream in("achievements.txt");
     int j=0;
    while (in){
        in.getline (string[j++],MAX_LINES_LEN);
    }
}

void Achievments::Display() {

    if(point==3000&&a==0){
        std::cout<<string[3]<<std::endl;
        a=1;
    }

   if(killGreen==1&&b==0){
      std::cout<<string[0]<<std::endl;
       b=1;
   }

   if(killYellow==1&&c==0){
       std::cout<<string[1]<<std::endl;
       killYellow+=1;
       c=1;
   }

    if(jump_block==20&&d==0){
        std::cout<<string[4]<<std::endl;
        d=1;
    }
    if(killYellow+killGreen==3&&a==1){
        std::cout<<string[2]<<std::endl;
        a=2;
    }


}

