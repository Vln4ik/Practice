#include <iostream>
#include "indprog/indprog/Header3.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	figure A;
	figure B;
	figure C;

	float X1, X2, X3, X4, Y1, Y2, Y3, Y4;

	cout << "Введите коордениаты четырехуголька À([x1, y1], [x2, y2], [x3, y3], [x4, y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	A.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Введите коордениаты четырехуголька B ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	B.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Введите коордениаты четырехуголька C ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	C.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Ïàðàìåòðû ôèãóðû A: "; A.show();
	cout << "Ïàðàìåòðû ôèãóðû B: "; B.show();
	cout << "Ïàðàìåòðû ôèãóðû C: "; C.show();

	cout << "\n";

	if (A.is_prug()) cout << "Ôèãóðà A ïðÿìîóãîëüíèê\n";
	if (B.is_prug()) cout << "Ôèãóðà B ïðÿìîóãîëüíèê\n";
	if (C.is_prug()) cout << "Ôèãóðà C ïðÿìîóãîëüíèê\n";

	cout << "\n";

	if (A.is_square()) cout << "Ôèãóðà A êâàäðàò\n";
	if (B.is_square()) cout << "Ôèãóðà B êâàäðàò\n";
	if (C.is_square()) cout << "Ôèãóðà C êâàäðàò\n";

	cout << "\n";

	if (A.is_romb()) cout << "Ôèãóðà A ðîìá\n";
	if (B.is_romb()) cout << "Ôèãóðà B ðîìá\n";
	if (C.is_romb()) cout << "Ôèãóðà C ðîìá\n";

	cout << "\n";

	if (A.is_in_circle()) cout << "Âîêðóã ôèãóðû A ìîæíî îïèñàòü îêðóæíîñòü\n";
	if (B.is_in_circle()) cout << "Âîêðóã ôèãóðû B ìîæíî îïèñàòü îêðóæíîñòü\n";
	if (C.is_in_circle()) cout << "Âîêðóã ôèãóðû C ìîæíî îïèñàòü îêðóæíîñòü\n";

	cout << "\n";

	if (A.is_out_circle()) cout << "Â ôèãóðó A ìîæíî âïèñàòü îêðóæíîñòü\n";
	if (B.is_out_circle()) cout << "Â ôèãóðó B ìîæíî âïèñàòü îêðóæíîñòü\n";
	if (C.is_out_circle()) cout << "Â ôèãóðó C ìîæíî âïèñàòü îêðóæíîñòü\n";
}
