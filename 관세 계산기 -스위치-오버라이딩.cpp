#include <iostream>
using namespace std;
class thing{
	protected:
	int cost;
	public:
		virtual void costs(){}
		virtual double total(){}
		
};
class wisky:public thing{
	double tax = 1.55;
	public:
		wisky(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	} 
	};
class cognac:public thing{
	double tax = 1.45;
	public:
		cognac(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
	};
class wine:public thing{
	double tax = 0.68;
	public:
		wine(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};		
class tabacco:public thing{
	double tax = 0.40;
	int n;
	public:
		tabacco(){}
		void costs(){cin>>cost>>n;}
		double total(){return tax * cost + n*0.594+(cost+(cost*tax)+(n*0.594))*0.1+(n*1.007+(n*0.4399));}
};
class perfume:public thing{
	double tax = 0.2;
	public:
		perfume(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class makeup:public thing{
	double tax = 0.2;
	public:
		makeup(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class clothes:public thing{
	double tax = 0.2;
	public:
		clothes(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class expclothes:public thing{
	double tax = 0.25;
	public:
		expclothes(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class shoes:public thing{
	double tax = 0.2;
	public:
		shoes(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class expshoes:public thing{
	double tax = 0.25;
	public:
		expshoes(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class bag:public thing{
	double tax = 0.2;
	public:
		bag(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class expbag:public thing{
	double tax = 0.5;
	public:
		expbag(){}
		void costs(){cin>>cost;}
		double total(){return (1852*0.2)+(cost-1852)*tax +cost;	}
};
class watch:public thing{
	double tax = 0.2;
	public:
		watch(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class overwatch:public thing{
	double tax = 0.50;
	public:
		overwatch(){}
		void costs(){cin>>cost;}
		double total(){return (1852*0.2)+(cost-1852)*tax +cost;	}
};
class camera:public thing{
	double tax = 0.1;
	public:
		camera(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class laptop:public thing{
	double tax = 0.1;
	public:
		laptop(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class cam:public thing{
	double tax = 0.2;
	public:
		cam(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class diet:public thing{
	double tax = 0.2;
	public:
		diet(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class cookie:public thing{
	double tax = 0.2;
	public:
		cookie(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class toy:public thing{
	double tax = 0.2;
	public:
		toy(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
class sport:public thing{
	double tax = 0.2;
	public:
		sport(){}
		void costs(){cin>>cost;}
		double total(){return tax * cost +	cost;	}
};
int main() {

int no = 0;
string again = "y";
thing* p;

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
	cout << "7- 일반의류(1000 달러 이하)" <<endl;
	cout << "8- 고급의류(100 달러 초과)" <<endl; 
	cout << "9- 일반신발(1000 달러 이하)" <<endl;
	cout << "10- 고급신발(100 달러 초과)" <<endl;
	cout << "11- 일반가방(1,852,000 원 이하)" << endl;
	cout << "12- 고급가방(1,852,000 원 초과)" << endl;
	cout << "13- 일반시계(1,852,000 원 이하)" <<endl;
	cout << "14- 고급시계(1,852,000 원 초과)" << endl;
	cout << "15- 카메라" <<endl;
	cout << "16- 노트북"<< endl;
	cout << "17- 캠코더" << endl;
	cout << "18- 건강보조제" << endl;
	cout << "19- 과자류" << endl;
	cout << "20- 완구류" <<endl;
	cout << "21- 운동용품" <<endl;

		
        cout << endl << "어떤 물품입니까? (1/17): ";
        cin >> no;
        cout << endl;
		

        switch(no)
        {
            case 1 :
                p = new wisky(); 
				cout << "위스키 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
			    break;
            case 2 :
                p = new cognac(); 
				cout << "꼬냑 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
                break;
            case 3 :
                p = new wine(); 
				cout << "와인 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
            case 4 :
                p = new tabacco(); 
				cout << "담배 가격: (천 원), 담배 갑 수" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 5 :
                p = new perfume(); 
				cout << "향수 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
            case 6 :
                p = new makeup(); 
				cout << "화장품 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 7 :
                p = new clothes(); 
				cout << "의류 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 8 :
                p = new expclothes(); 
				cout << "의류 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 9 :
                p = new shoes(); 
				cout << "신발 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 10 :
                p = new expshoes(); 
				cout << "신발 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 11 :
                p = new bag(); 
				cout << "가방 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 12 :
                p = new expbag(); 
				cout << "가방 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 13 :
                p = new watch(); 
				cout << "시계 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
			case 14 :
                p = new overwatch(); 
				cout << "시계 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;		
			case 15 :
                p = new camera(); 
				cout << "카메라 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;			   
			case 16 :
                p = new laptop(); 
				cout << "노트북 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;
            case 17 :
                p = new cam(); 
				cout << "캠코더 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;   
			 case 18 :
                p = new diet(); 
				cout << "건강보조제 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;   
			 case 19 :
                p = new cookie(); 
				cout << "과자 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;   
			 case 20 :
                p = new toy(); 
				cout << "완구 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;   	
			 case 21 :
                p = new sport(); 
				cout << "운동용품 가격: (천 원)" <<endl; 
				p->costs();
				cout << "구입 금액 + 관세" <<	p->total()<< " 천 원"<< endl;
				delete p;
				break;   			
			default :
                cout << "없는 품목입니다 더 많은 정보는 관세청 홈페이지에서 찾으시기 바랍니다."<<endl;

        }   
    cout<<"신고 미이행시에는 납부세액의 40% 또는 60%(반복적 신고 미이행자)의 가산세가 부과됩니다."<<endl<<endl;
    cout << "찾으시는 품목이 있습니까? (Y/N)" << endl;
    cin >> again;
    cout << endl;

}

    cout << "Ending...";

}
