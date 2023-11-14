#include "OfficeWorker.h"
#include <stdio.h>
void OfficeWorker::Commute()
{
	printf("電車に乗ったら運転見合わせで2時間遅れて立ちっぱなしだった。(サラリーマン)\n");
}

void OfficeWorker::Work()
{
	printf("資料作りをしていたが体がとても疲れて集中できなかった。(サラリーマン)\n");
}

void OfficeWorker::GoingHome()
{
	printf("とても疲れて寝ていたら県を2つまたいで終点まで行ってしまい帰った時には0時を過ぎていた。(サラリーマン)\n");
}
