#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Wellcome to the club, buddy! \n Ur language: \n 1 - rus \n 2 - eng \n";
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Выберите слово: \n1 - Универсалии \n2 - могут \n3 - существовать \n4 - как \n5 - сущности \n6 - конкретных \n7 - вещей \n8 - или \n9 - они \n10 - являются \n11 - лишь \n12 - порождениями \n13 - разума \n14 - Зависит\n15 - от философской школы\n";
        int b;
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "Universals";
            break;
        case 2:
            cout << "can";
            break;
        case 3:
            cout << "exist";
            break;
        case 4:
            cout << "how";
            break;
        case 5:
            cout << "entities";
            break;
        case 6:
            cout << "specific";
            break;
        case 7:
            cout << "things";
            break;
        case 8:
            cout << "or";
            break;
        case 9:
            cout << "they";
            break;
        case 10:
            cout << "are";
            break;
        case 11:
            cout << "just";
            break;
        case 12:
            cout << "offspring";
            break;
        case 13:
            cout << "the mind";
            break;
        case 14:
            cout << "Depends";
            break;
        case 15:
            cout << "from the philosophical school";
            break;
        default:
            cout << "Ну и что ты выбрал, дурачок?";
            break;
        }
        cout << "\n Пока - пока :) \n";
        break;
    case 2:
        cout << "Choose the word: \n1 - Can \n2 - universals \n3 - exist \n4 - as \n5 - the essence \n6 - of concrete things \n7 - or \n8 - are \n9 - they \n10 - only \n11 - products \n12 - of the mind \n13 - It \n14 - depends \n15 - on the philosophical school\n";
        int c;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Могут";
            break;
        case 2:
            cout << "универсалии";
            break;
        case 3:
            cout << "существовать";
            break;
        case 4:
            cout << "как";
            break;
        case 5:
            cout << "сущность";
            break;
        case 6:
            cout << "конкретных вещей";
            break;
        case 7:
            cout << "или";
            break;
        case 8:
            cout << "есть";
            break;
        case 9:
            cout << "они";
            break;
        case 10:
            cout << "только";
            break;
        case 11:
            cout << "порождения";
            break;
        case 12:
            cout << "разума";
            break;
        case 13:
            cout << "Это";
            break;
        case 14:
            cout << "Зависит";
            break;
        case 15:
            cout << "От философской школы";
            break;
        default:
            cout << "Ну и что ты выбрал, дурачок?";
            break;
        }
        cout << "\n Bye - bye :) \n";
        break;
    default:
        cout << "Incorrect number";
        break;
    }
    
 
    return 0;
}