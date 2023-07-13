long long appleDistance(int N, int Ax ,int Ay, int Bx, int By, vector<vector<int>>arr){
   long long ans=0;
   long long int n=arr.size();
   for(int i=0;i<n;i++){
     long long int x=arr[i][0],y=arr[i][1];
     int d1=abs(Ax-x)+abs(Ay-y);
     int d2=abs(Bx-x)+abs(By-y);
     if(d1<d2){
        ans+=d1;
        Ax=x;
        Ay=y;
     }
     else {
        ans+=d2;
        Bx=x;
        By=y;
     }
   }
   return ans;
}

ans+=5
A[1 4],B[2,9]
4,5
ans+=4
A[4,5],B[2,9]
9,9
ans+=7
A[4,5],B[9,9]
7,7
ans+=4
A[4,5],B[7,7]
