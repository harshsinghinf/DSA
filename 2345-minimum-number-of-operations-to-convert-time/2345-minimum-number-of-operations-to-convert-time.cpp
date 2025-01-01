class Solution {
public:
    int convertTime(string current, string correct) {
        int curHr,curMin,corHr,corMin,curTotalMinute,corTotalMinute;
        char colon; //to consume ';'
        stringstream curss(current);
        curss >> curHr >> colon >> curMin;
        curTotalMinute = curHr * 60 + curMin;
        stringstream corss(correct);
        corss >> corHr >> colon >> corMin;
        corTotalMinute = corHr * 60 + corMin;
        int count = 0;
        while((corTotalMinute-curTotalMinute)>=60 && curTotalMinute<corTotalMinute){
            curTotalMinute += 60;
            count+=1;
        }
        while((corTotalMinute-curTotalMinute)>=15 && curTotalMinute<corTotalMinute){
            curTotalMinute += 15;
            count+=1;
        }while((corTotalMinute-curTotalMinute)>=5 && curTotalMinute<corTotalMinute){
            curTotalMinute += 5;
            count+=1;
        }while((corTotalMinute-curTotalMinute)>=1 && curTotalMinute<corTotalMinute){
            curTotalMinute += 1;
            count+=1;
        }
        return count;
    }
};