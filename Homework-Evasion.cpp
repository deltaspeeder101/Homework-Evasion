#include <iostream>
#include <limits>

int getChoice() {
    int c;
    while (!(std::cin >> c)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter a number.\n";
    }
    return c;
}

int main() {
    int choice;

    std::cout << "======================HOMEWORK EVASION======================\n";
    std::cout << "Your name is Lucas\n";
    std::cout << "You are in a classroom full of noisy kids who pray that no homework is given today\n";
    std::cout << "Another thing they pray for, almost all the time, is for the teacher's pet to be absent for the rest of the year\n";
    std::cout << "Suddenly, your best friend Charlie whispers to you:\n";
    std::cout << "'Yo bro, there's 10 minutes left in the period, she's about to give us homework.'\n";
    std::cout << '\n';
    std::cout << '\n';

    std::cout << '\n';

    std::cout << "Enter in a number to select options\n";

    std::cout << "Option 1: Ok. Just take the homework and suffer (Enter 1 to select)\n";
    std::cout << "Option 2: Say to Charlie: 'Alright, I'm gonna do something about it.' (Enter 2 to select)\n";
    std::cout << "Option 3: Approach the teacher's pet (Enter 3 to select)\n";
    std::cout << "Option 4: Quick thinking (Enter 4 to select)\n";
    choice = getChoice();

    switch (choice) {

    case 1:
        std::cout << "You tell Charlie to shut up and just accept his fate. 'Dude what? Are you mental?' Charlie asks.\n";
        std::cout << "Option 1: Do nothing.\n";
        std::cout << "Option 2: Tell the teacher to give the class more homework.\n";
        std::cout << "Option 3: Kill Charlie with your pen.\n";
        choice = getChoice();

        switch (choice) {
        case 1:
            std::cout << "You did nothing. The teacher's pet, as usual, reminded Mrs. Lucy to give homework\n";
            std::cout << "and you had to write a 300 word essay.\n";
            std::cout << '\n';
            std::cout << "GAME OVER. Gave up ending. I mean... ok?\n";
            break;

        case 2:
            std::cout << "'Actually since you made me mad... Mrs. Lucy!' you call out.\n";
            std::cout << "Mrs. Lucy looks back at you. 'Yes, Lucas?'\n";
            std::cout << "'Can we have extra homework?' you ask.\n";
            std::cout << "A spark of opportunity lights her up and she was almost half-singing, handing out even more homework than before.\n";
            std::cout << '\n';
            std::cout << '\n';
            std::cout << "GAME OVER. Traitor ending. You are horrible.\n";
            break;

        case 3:
            std::cout << "'SHUT UP!' you scream. You scream and stab Charlie multiple times in the chest\n";
            std::cout << "practically ramming it through him. He bursts out with blood, his mouth overflowing with it.\n";
            std::cout << "He gets murdered right there in cold blood.\n";
            std::cout << '\n';
            std::cout << '\n';
            std::cout << "GAME OVER. Good? ending. You didn't have to do homework, but at what cost?\n";
            break;

        default:
            std::cout << "Invalid option.\n";
            break;
        }
        break;

    case 2:
        std::cout << "'Alright, I'll do something about it.' you say as you stand up and walk towards Mrs. Lucy. 'Mrs. Lucy?' you ask. 'What?' she answers\n";
        std::cout << "Option 1: Kill her with your pen.\n";
        std::cout << "Option 2: Can you not assign homework?\n";
        std::cout << "Option 3: Glaze her.\n";
        choice = getChoice();
        std::cout << '\n';
        std::cout << '\n';

        switch (choice) {
        case 1:
            std::cout << "You pull out your pen, and before anyone can say or do anything, you stab her right on her neck, and Mrs. Lucy collapses.\n";
            std::cout << "'Call 911' says Charlie as he glances a second time making sure he's not just seeing things.\n";
            std::cout << '\n';
            std::cout << '\n';
            std::cout << "WORST ENDING. You eliminated the power from the source.\n";
            break;

        case 2:
            std::cout << "'Can you not assign homework today?' you ask Mrs. Lucy.\n";
            std::cout << "'Oh yeah, I almost forgot.' Mrs. Lucy says as dread travels down your spine. 'No.'\n";
            std::cout << '\n';
            std::cout << '\n';
            std::cout << "GAME OVER. Bad ending.\n";
            break;

        case 3:
            std::cout << "'I just wanted to say, you are the BEST teacher EVER.' you say. 'H-Huh!?' Mrs. Lucy stutters in confusion.\n";
            std::cout << "'You got so much rizz I bet you could be a model.' you continue, surprised Mrs. Lucy even knows what the word 'rizz' means.\n";
            std::cout << "'Thank you'. She says. 'Oh wait, it's time, class dismissed.' and she forgot about the homework.\n";
            std::cout << '\n';
            std::cout << '\n';
            std::cout << "THE END. Good ending. You should try that again.\n";
            break;

        default:
            std::cout << "Invalid option.\n";
            break;
        }
        break;

    case 3:
        std::cout << "You approach the teacher's pet. 'What do you need?' he asked rudely.\n";
        std::cout << "Option 1: Force him not to remind the teacher to give homework.\n";
        std::cout << "Option 2: Kidnap him.\n";
        std::cout << "Option 3: Bribe him to not remind the teacher to give homework.\n";
        choice = getChoice();

        switch (choice) {

        case 1:
            std::cout << "'I need you not to remind the teacher about homework.' you say, in a rather serious manner.\n";
            std::cout << "'Or else...'\n";
            std::cout << "'Or else what?' asks the teacher's pet.\n";
            std::cout << '\n';
            std::cout << '\n';
            std::cout << "Option 1: Finish your sentence to assert dominance.\n";
            std::cout << "Option 2: Uppercut him.\n";
            std::cout << "Option 3: Strangle him.\n";
            choice = getChoice();

            switch (choice) {
            case 1:
                std::cout << "'Or else...uh-I'll...' you stutter, you didn't think you needed to finish your sentence,\n";
                std::cout << "so you didn't think about what to say after 'or else...' Timmy felt bad because you lost so much aura,\n";
                std::cout << "so he didn't remind the teacher about homework.\n";
                std::cout << '\n';
                std::cout << '\n';
                std::cout << "THE END. Aura debt ending. Well... at least there was no homework!\n";
                break;

            case 2:
                std::cout << "You charge up momentum and land an uppercut blow so powerful you knock him out.\n";
                std::cout << '\n';
                std::cout << '\n';
                std::cout << "GAME OVER. You got expelled. You lost, but it was satisfying. Loss of satisfaction ending.\n";
                break;

            case 3:
                std::cout << "You lunge forward, grabbing his neck making sure he is unable to speak. 'Or else you die a painful death,\n";
                std::cout << "NOW SAY IT TO HER!' 'Okay!' Timmy barely talks through the small window of time you loosened your grip.\n";
                std::cout << "Timmy, the teacher's pet, begs Mrs. Lucy not to assign homework.\n";
                std::cout << '\n';
                std::cout << '\n';
                std::cout << "THE END. Physical blackmail ending.\n";
                break;

            default:
                std::cout << "Invalid option.\n";
                break;
            }
            break;

        case 2:
            std::cout << "You knock him out and drag him out of his chair while the teacher was busy.\n";
            std::cout << "'Hey! What are you doing?' a fellow classmate asks. 'Mr. Brown?' asks Mrs. Lucy.\n";
            std::cout << "She never calls anyone by their last name. She must be enraged. 'WHAT DID YOU DO TO TIMMY!?'\n";
            std::cout << "You were taken to the principal's office and expelled.\n";
            std::cout << '\n';
            std::cout << '\n';
            std::cout << "GAME OVER. Worse ending. Dang cuh, whatever.\n";
            break;

        case 3:
            std::cout << "'Here, have $20.' you say. 'In return, can you convince the teacher not to give homework?'\n";
            std::cout << "The teacher's pet thinks for a while.\n";
            std::cout << "'How about $30?' he asks.\n";
            std::cout << '\n';
            std::cout << '\n';
            std::cout << "Option 1: 'Fine'\n";
            std::cout << "Option 2: Hell no!\n";
            choice = getChoice();

            switch (choice) {
            case 1:
                std::cout << "'Fine.' you say. 'It's a deal then' the teacher's pet says. 'Pleasure doing business with you.'\n";
                std::cout << "Thanks to the teacher's pet, Mrs. Lucy didn't give homework.\n";
                std::cout << '\n';
                std::cout << '\n';
                std::cout << "THE END. Business Ending. Losing $30 just to not do homework is daylight robbery.\n";
                break;

            case 2:
                std::cout << "'Hell no' you say as you continue bargaining. 'How about 25?' you ask.\n";
                std::cout << "'No I want $30' Timmy says, in a taunting tone.\n";
                std::cout << '\n';
                std::cout << '\n';
                std::cout << "Option 1: Accept defeat.\n";
                std::cout << "Option 2: Give him the $30.\n";
                std::cout << "Option 3: Scam him.\n";
                choice = getChoice();

                switch (choice) {
                case 1:
                    std::cout << "You walk away, realizing you've already gone past the point of winning. You've lost but you accept it.\n";
                    std::cout << '\n';
                    std::cout << '\n';
                    std::cout << "+Respect. GAME OVER. Died fighting ending.\n";
                    break;

                case 2:
                    std::cout << "You reach into your pocket to get another $10, but then realize you only had $20 in your possession,\n";
                    std::cout << "which was the entire reason you said no in the first place.\n";
                    std::cout << '\n';
                    std::cout << '\n';
                    std::cout << "GAME OVER. Broke ending.\n";
                    break;

                case 3:
                    std::cout << "'Alright, do your part first.' you tell him. Timmy, thinking he will receive the money,\n";
                    std::cout << "asks the teacher not to give homework.\n";
                    std::cout << "By the time he is back, you are long gone.\n";
                    std::cout << '\n';
                    std::cout << '\n';
                    std::cout << "THE END. Scammer ending.\n";
                    break;

                default:
                    std::cout << "Invalid option.\n";
                    break;
                }
                break;

            default:
                std::cout << "Invalid option.\n";
                break;
            }
            break;

        default:
            std::cout << "Invalid option.\n";
            break;
        }
        break;

    case 4:
        std::cout << "You pull out your phone and dial 911. '911 what's your emergency?' the operator asks over the phone.\n";
        std::cout << "'Our teacher is currently possessing an explosive, please arrive immediately!' You lie straight through your teeth.\n";
        std::cout << "About 3 minutes later, the police arrest Mrs. Lucy.\n";
        std::cout << '\n';
        std::cout << '\n';
        std::cout << "THE END. Why? Why would you?\n";
        break;

    default:
        std::cout << "Please enter a valid option using the numbers provided with the option.\n";
        break;
    }

    return 0;
}
