
class Solution {
public:
    int countDaysTogether(string arriveAlice,string leaveAlice,string arriveBob,string leaveBob) {
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int a1=0,a2=0,b1=0,b2=0;
        for(int i=0;i<2;i++){
            a1=a1*10+(arriveAlice[i]-'0');
            a2=a2*10+(leaveAlice[i]-'0');
            b1=b1*10+(arriveBob[i]-'0');
            b2=b2*10+(leaveBob[i]-'0');
        }
        int startA=0,endA=0,startB=0,endB=0;
        for(int i=0;i<a1-1;i++){
            startA+=days[i];
        }
        startA+=stoi(arriveAlice.substr(3,2));
        for(int i=0;i<a2-1;i++){
            endA+=days[i];
        }
        endA+=stoi(leaveAlice.substr(3,2));
        for(int i=0;i<b1-1;i++){
            startB+=days[i];
        }
        startB+=stoi(arriveBob.substr(3,2));
        for(int i=0;i<b2-1;i++){
            endB+=days[i];
        }
        endB+=stoi(leaveBob.substr(3,2));
        int start=max(startA,startB);
        int end=min(endA,endB);
        int count=0;
        for(int i=start;i<=end;i++){
            count++;
        }
        return count;
    }
};
