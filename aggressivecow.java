import java.util.*;

public class aggressivecow {
    public boolean is_valid(int[] a,int n,int c,int mid) {
    int cow=1;
    int lastpos=0;
    for (int i=0;i<n;i++){
        if(a[i]>mid)return false;
        if(a[i]-lastpos<=mid){
            cow++;
            lastpos=a[i];

        }
        
        if(cow==c){
            return true;
        }
    }
    return false;

}
    }
    public int get_distance(int[] arr,int n,int c) {
        sort(arr,0,n-1);
        int st=1,ans=-1
        int end=arr[n-1]-arr[0];
        while(st<=end){
            int mid=st+(end-st)/2;
            if(is_valid(arr,n,c,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
