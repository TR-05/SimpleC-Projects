#include <iostream>

char getPlayerChoice();
char getCpuChoice();
void chooseWinner(char p1, char p2);
char continueGame();

int main()
{
    std::cout << "Game of Rock Paper Scissors!\n";
    for (int i = 0; i <= 2; i ++) {
    char player = getPlayerChoice();
    char cpu = getCpuChoice();
    chooseWinner(player, cpu);
    if (continueGame() == '1') {
        i = 1;
    } else {
        i =3;
    }
    }
}

char getPlayerChoice() {
    char player;

    do{
        std::cout << "Choose one of the following\n";
        std::cout << "***************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    }while (player != 'r' && player != 'p' && player != 's');
        switch(player) {
            case 'r': std::cout << "You chose rock, "; break;
            case 'p': std::cout << "You chose paper, "; break;
            case 's': std::cout << "You chose scissors, "; break;
        }

    return player;
}
char getCpuChoice() {
    srand(time(0));
    int cpu_num = (rand() % 3) + 1;
    char cpu;
    switch(cpu_num) {
        case 1: std::cout << "CPU chose rock!"; return 'r';
        case 2: std::cout << "CPU chose paper!"; return 'p';
        case 3: std::cout << "CPU chose scissors!"; return 's';
    }
    return 0;
}
void chooseWinner(char player, char cpu) {
    std::cout << '\n';
    if (player == cpu) std::cout << "It's A Tie!\n";
    if (player == 'r' && cpu == 's') std::cout << "You Won, Rock Beats Scissors!\n";
    if (player == 'p' && cpu == 'r') std::cout << "You Won, Paper Beats Rock!\n";
    if (player == 's' && cpu == 'p') std::cout << "You Won, Scissors Beats Paper!\n";
    if (player == 's' && cpu == 'r') std::cout << "You Lost, Rock Beats Scissors!\n";
    if (player == 'r' && cpu == 'p') std::cout << "You Lost, Paper Beats Rock!\n";
    if (player == 'p' && cpu == 's') std::cout << "You Lost, Scissors Beats Paper!\n";
}
char continueGame(){
    char choice;

    do{
        std::cout << "Choose one of the following\n";
        std::cout << "***************************\n";
        std::cout << "'1' to continue\n";
        std::cout << "'2' to quit\n";
        std::cin >> choice;
    }while (choice != '1' && choice != '2');
        switch(choice) {
            case '1': std::cout << "Continue!\n"; break;
            case '2': std::cout << "Quit!\n"; break;
        }

    return choice;
}