#include <iostream>
using namespace std;

int main() {

int drink = 0;
string again = "y";


while( again == "y" || again == "Y")
{

    cout << "숫자 외 입력하지 마세요" << endl << endl;

    cout << "품목을 정하세요:"<<endl; 
	cout << "1-위스키( 일반적으로 양주로 표현되는 대부분의 증류주가 포함된다.)" << endl;
	cout <<	"2-꼬냑(과실주 증류주=브랜디)"<<endl;
	cout << "3- 포도주(과실주)" << endl;
	cout << "4- 담배" <<endl;
	cout << "5- 향수" <<endl; 
	cout << "6- 화장품" << endl;
	cout << "7- 의류" <<endl;
	cout << "8- 신발류" <<endl;
	cout << "9- 일반가방"<< endl;
	cout << "10- 고급가방" << endl;
	cout << "11- 고급 시계" << endl;
	cout << "12- 노트북"<< endl;
	cout << "13- 캠코더" << endl;
	cout << "14- 건강보조제" << endl;
	cout << "15- 과자류" << endl;
	cout << "16- 완구류" <<endl;
	cout << "17- 운동용품" <<endl;

        cout << endl << "어떤 물품입니까? (1/17): ";
        cin >> drink;
        cout << endl;

        switch(drink)
        {
            case 1 :
                cout << "위스키" << endl<<endl;
                break;
            case 2 :
                cout << "꼬냑" << endl<<endl;
                break;
            case 3 :
                cout << "포도주" << endl<<endl;
                break;
            case 4 :
                cout << "담배" << endl<<endl;
                break;
            case 5 :
                cout << "향수" << endl<<endl;
                break;  
            case 6 :
                cout << "화장품" << endl<<endl;
                break;
			case 7 :
                cout << "의류" << endl<<endl;
                break;
			case 8 :
                cout << "신발류" << endl<<endl;
                break;
			case 9 :
                cout << "일반 가방" << endl<<endl;
                break;
			case 10 :
                cout << "고급 가방" << endl<<endl;
                break;
			case 11 :
                cout << "고급 시계" << endl<<endl;
                break;
			case 12 :
                cout << "노트북" << endl<<endl;
                break;
			case 13 :
                cout << "캠코더" << endl<<endl;
                break;
			case 14 :
                cout << "건강보조제" << endl<<endl;
                break;				
			case 15 :
                cout << "과자류" << endl<<endl;
                break;					   
			case 16 :
                cout << "완구류" << endl<<endl;
                break;
            case 17 :
                cout << "운동용품" << endl<<endl;
                break;    
			default :
                cout << "덦는 품목입니다 더 많은 정보는 관세청 홈페이지에서 찾으시기 바랍니다."<<endl;

        }   
   
    cout << "찾으시는 품목이 있습니까? (Y/N)" << endl;
    cin >> again;
    cout << endl;

}

    cout << "Ending...";

}
