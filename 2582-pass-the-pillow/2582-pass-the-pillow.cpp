class Solution {
public:
    int passThePillow(int n, int time) {
        int person =1;
        int dir=1;  // forward=1 , backward=-1
        while(time--){
         person+=dir;
        if(person ==n || person==1){
            dir*=-1;

        }
        }
       return person;
        
    }
};