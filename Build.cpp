using namespace std;
void itc_name(){
    cout<<"Artem"<<endl;
}
void itc_fio(){
    cout<<"Marinchev"<<endl;
}
int itc_abs(int a1){
    if (a1>=0) {
        return a1;}
        return (a1*(-1));
}
double itc_fabs(double a1){
    if (a1>=0){
        return a1;
    }
    return (a1*(-1));
}
int itc_revnbr(int a1){
    int a2,a3,a4;
    a2=a1%10;
    a3=a1/10%10;
    a4=a1/100;
    return (a2*100+a3*10+a4);
}
