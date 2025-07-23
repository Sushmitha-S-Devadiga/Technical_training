/* 
Welcome to JDoodle!

You can execute code here in 88 languages. Right now you’re in the C IDE.

  1. Click the orange Execute button ▶ to execute the sample code below and see how it works.

  2. Want help writing or debugging code? Type a query into JDroid on the right hand side ---------------->

  3. Try the menu buttons on the left. Save your file, share code with friends and open saved projects.

Want to change languages? Try the search bar up the top. 
*/
#include<stdio.h>

int main() {
    int src,dest,adult,child,total_cost,ns;
    float cost_adult,cost_child;
    printf("enter your source stage no-\n");
    scanf("%d",&src);
    printf("source is %d",src);
    printf("enter your destination stage no-\n");
    scanf("%d",&dest);
    printf("destination is %d\n",dest);
    printf("number of adults\n");
    scanf("%d",&adult);
    printf("no. of adults is %d\n",adult);
    printf("number of childrens\n");
    scanf("%d",&child);
    printf("road_tax is 5%\n");
    ns=dest-src;
    cost_adult=ns*10*adult+0.05;
    cost_child=ns*5*child+0.05;//or tc=ns*10*a+ns*5*c;
    total_cost=cost_adult+cost_child;
    printf("total price is %d",total_cost);
    
    
    
    
}