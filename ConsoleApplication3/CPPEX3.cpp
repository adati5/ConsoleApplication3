// ConsoleApplication3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
using namespace std;
#include "chapter4.h"
#include "getObesity.h"

int main() {
    double height;
    double weight;
    double bmi;
    string judgeMent;
  
   
    cout << "身長（ｃｍ）を入力してください：";
    cin >> height;

    cout << "体重（ｋｇ）を入力してください：";
    cin >> weight;

    bmi = getBmi(height, weight);

    cout << "あなたのBMIは、" << bmi << "です。" << endl;

    judgeMent = getObesity(bmi);


    cout << judgeMent << "です。" << endl;

    int e;
    cin >> e;


    return 0;
}




// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
