# include<iostream>

using namespace std;

int main() {
    int n;
    int x;
    int bf;
    int ans=1;
    cout<<"enter the power"<<endl;
    cin>>n;
    cout<<"enter the base"<<endl;
    cin>>x;
    

    bf=n;
    if(n==0) {
        cout<<"The answer is 1"<<endl;
        return 0;
    }
    if(x==0) {
        cout<<"The answer is 0"<<endl;
        return 0;
    }
    if(x==1) {
        cout<<"The answer is 1"<<endl;
        return 0;
    }
    if(x==-1) {
        if(n%2==0) {
            cout<<"The answer is 1"<<endl;
            return 0;
        } else {
            cout<<"The answer is -1"<<endl;
            return 0;
        }
    }

    if(n<0) {
        bf=-bf;
        x=1/x;

    }
    while(bf>0) {
        if(bf%2==1) {
            ans=ans*x;
        }
        x=x*x;
        bf=bf/2;
    }
    cout<<"The answer is "<<ans<<endl;
    return 0;

}
