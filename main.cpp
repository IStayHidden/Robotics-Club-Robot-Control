#include<iostream>
int main (){
    double rpm = 0.0;
    std::string inp = "00";
    int leftwheel = 0;
    int rightwheel = 0;
    int fowards = 0;
    int backwards = 0;
    int backr = 0;
    int frontr = 0;
    int backl = 0;
    int frontl = 0;
    int start = 1;
    std::cout << "This is Ben's bot AI. Written in c++.\n";
    std::cout << "!This AI is in alpha testing. Some bugs may happen, I'm very new to c++ so just note that\n";
    std::cout << "controls: foward(f),backwards(b),rpm or revolutions per minit*limited*(rpm) *use (s) to stop the bot*\n";
    std::cout << "Set the rpm please(must be equal to or under 20 rpm)\n";
    std::cin >> rpm;
    while (start == 1){
        std::cout << "(AI MOVE)\n";
        std::cin >> inp;
        if (inp == "f"){
            std::cout << "input taken(f), moving fowards...\n";
            backwards = 0;
            fowards = 1;
            leftwheel = 1;
            rightwheel = 1;
        }
        else if (inp == "b"){
            std::cout << "input taken(b), moving backwards...\n";
            fowards = 0;
            backwards = 1;
            leftwheel = 1;
            rightwheel = 1;
        }
        else if (inp == "s"){
            std::cout << "stopping bot...\n";
            backwards = 0;
            fowards = 0;
            leftwheel = 0;
            rightwheel = 0;
        }
        else if (inp == "l"){
            fowards = 0;
            backwards = 0;
            backr = 0;
            frontr = 1;
            backl = 1;
            frontl = 0;
            leftwheel = 1;
            rightwheel = 1;
            std::cout << "input taken(l), moving left...";
        }
        else if (inp == "r"){
            fowards = 0;
            backwards = 0;
            backr = 1;
            frontr = 0;
            backl = 0;
            frontl = 1;
            leftwheel = 1;
            rightwheel = 1;
            std::cout << "input taken(r), moving right...";
        }
    }
    return 0;
}