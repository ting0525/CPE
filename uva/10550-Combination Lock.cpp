#include <iostream>
using namespace std;
 
int main() {
    int n0, n1, n2, n3;//�`�N�ժ�b�ʤ��O�ɰw 
    while (cin >> n0 >> n1 >> n2 >> n3){
        if (n0 == 0 && n1 == 0 && n2 == 0 && n3 == 0) break;
        int ans = 720; //��������V����L2���
        
        ans += ((40 + n0 - n1) % 40) * 9;  //�~�򶶮�����V�ઽ���F�Ĥ@�Ӹ��X�W
        cout<<ans<<endl;
        
        ans += 360; //�f������V����L�@���
        cout<<ans<<endl;
        
		ans += ((40 + n2 - n1) % 40) * 9;  //�~��f������V�ઽ���F�ĤG�Ӹ��X
        cout<<ans<<endl;
        
		ans += ((40 + n2 - n3) % 40) * 9;  //��������V����L�����F�ĤT�Ӹ��X
        cout << ans << "\n";
    }
}
