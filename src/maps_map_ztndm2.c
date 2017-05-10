// Converted from .qc on 05/02/2016

#ifdef BOT_SUPPORT

#include "g_local.h"
#include "fb_globals.h"

void map_ztndm2() {
	CreateMarker(-695, -23, 88);
	CreateMarker(-578, 76, 88);
	CreateMarker(-578, -145, 152);
	CreateMarker(-327, 297, 88);
	CreateMarker(-292, 133, 126);
	CreateMarker(-11, 128, 216);
	CreateMarker(-446, 427, 216);
	CreateMarker(-723, 412, 216);
	CreateMarker(-1002, 403, 216);
	CreateMarker(-1024, 645, 216);
	CreateMarker(-1159, 640, 224);
	CreateMarker(-762, 678, 152);
	CreateMarker(281, 187, 216);
	CreateMarker(-292, -6, 88);
	CreateMarker(258, 846, 376);
	CreateMarker(297, 527, 376);
	CreateMarker(290, 341, 289);
	CreateMarker(-4, 840, 376);
	CreateMarker(-317, 1046, 376);
	CreateMarker(-514, 1041, 334);
	CreateMarker(-785, 937, 280);
	CreateMarker(-614, 861, 247);
	CreateMarker(-439, 853, 170);
	CreateMarker(-250, 906, 152);
	CreateMarker(-276, 1042, 152);
	CreateMarker(-188, 806, 152);
	CreateMarker(-380, 700, 152);
	CreateMarker(-708, -212, 184);
	CreateMarker(-485, -346, 152);
	CreateMarker(-670, -388, 104);
	CreateMarker(-834, -391, 24);
	CreateMarker(-884, -283, -24);
	CreateMarker(-798, -369, 248);
	CreateMarker(-635, -369, 304);
	CreateMarker(-353, -369, 410);
	CreateMarker(-159, -307, 440);
	CreateMarker(-472, -198, 152);
	CreateMarker(-158, -148, 440);
	CreateMarker(-430, -142, 440);
	CreateMarker(-860, 105, 440);
	CreateMarker(-818, 401, 440);
	CreateMarker(-234, 371, 440);
	CreateMarker(-835, 564, 440);
	CreateMarker(-1029, 636, 440);
	CreateMarker(-604, 633, 440);
	CreateMarker(-768, 826, 440);
	CreateMarker(431, 720, 536);
	CreateMarker(-90, 680, 440);

	SetGoal(1, 5);
	SetGoal(10, 24);
	SetGoal(10, 25);
	SetGoal(11, 26);
	SetGoal(11, 27);
	SetGoal(12, 42);
	SetGoal(2, 6);
	SetGoal(3, 8);
	SetGoal(3, 9);
	SetGoal(4, 10);
	SetGoal(4, 40);
	SetGoal(5, 11);
	SetGoal(5, 12);
	SetGoal(6, 14);
	SetGoal(7, 15);
	SetGoal(8, 16);
	SetGoal(8, 23);
	SetGoal(9, 19);
	SetGoal(9, 20);

	SetZone(1, 17);
	SetZone(1, 19);
	SetZone(1, 20);
	SetZone(1, 21);
	SetZone(1, 22);
	SetZone(1, 28);
	SetZone(1, 35);
	SetZone(1, 42);
	SetZone(1, 43);
	SetZone(1, 44);
	SetZone(1, 45);
	SetZone(1, 46);
	SetZone(1, 47);
	SetZone(1, 48);
	SetZone(1, 49);
	SetZone(1, 50);
	SetZone(1, 51);
	SetZone(1, 52);
	SetZone(1, 53);
	SetZone(1, 54);
	SetZone(1, 55);
	SetZone(1, 56);
	SetZone(16, 7);
	SetZone(2, 18);
	SetZone(2, 24);
	SetZone(2, 25);
	SetZone(2, 29);
	SetZone(2, 30);
	SetZone(2, 33);
	SetZone(2, 34);
	SetZone(2, 4);
	SetZone(2, 57);
	SetZone(2, 58);
	SetZone(2, 59);
	SetZone(2, 60);
	SetZone(2, 61);
	SetZone(2, 62);
	SetZone(2, 63);
	SetZone(2, 64);
	SetZone(2, 65);
	SetZone(2, 66);
	SetZone(2, 67);
	SetZone(2, 68);
	SetZone(2, 69);
	SetZone(3, 11);
	SetZone(3, 12);
	SetZone(3, 31);
	SetZone(3, 36);
	SetZone(3, 38);
	SetZone(3, 39);
	SetZone(3, 6);
	SetZone(3, 70);
	SetZone(3, 71);
	SetZone(3, 72);
	SetZone(3, 73);
	SetZone(3, 74);
	SetZone(3, 75);
	SetZone(3, 76);
	SetZone(3, 77);
	SetZone(3, 78);
	SetZone(3, 79);
	SetZone(3, 8);
	SetZone(3, 9);
	SetZone(4, 16);
	SetZone(4, 23);
	SetZone(4, 26);
	SetZone(4, 27);
	SetZone(4, 37);
	SetZone(4, 41);
	SetZone(4, 80);
	SetZone(4, 81);
	SetZone(4, 82);
	SetZone(4, 83);
	SetZone(4, 84);
	SetZone(4, 85);
	SetZone(5, 10);
	SetZone(5, 32);
	SetZone(5, 40);
	SetZone(5, 5);
	SetZone(5, 86);
	SetZone(5, 87);
	SetZone(5, 88);
	SetZone(5, 90);
	SetZone(6, 13);
	SetZone(6, 14);
	SetZone(6, 15);
	SetZone(6, 89);

	SetMarkerPath(10, 0, 40);
	SetMarkerPath(11, 0, 12);
	SetMarkerPath(11, 1, 36);
	SetMarkerPath(12, 0, 79);
	SetMarkerPath(12, 1, 11);
	SetMarkerPath(12, 2, 36);
	SetMarkerPath(13, 1, 89);
	SetMarkerPath(13, 2, 14);
	SetMarkerPath(14, 0, 89);
	SetMarkerPath(14, 2, 57);
	SetMarkerPath(15, 1, 89);
	SetMarkerPath(16, 0, 84);
	SetMarkerPath(16, 1, 23);
	SetMarkerPath(17, 0, 50);
	SetMarkerPath(17, 1, 28);
	SetMarkerPath(18, 0, 54);
	SetMarkerPath(18, 1, 69);
	SetMarkerPath(19, 0, 20);
	SetMarkerPath(19, 1, 42);
	SetMarkerPath(20, 0, 56);
	SetMarkerPath(20, 1, 19);
	SetMarkerPath(21, 0, 44);
	SetMarkerPath(21, 1, 22);
	SetMarkerPath(22, 0, 21);
	SetMarkerPath(22, 1, 43);
	SetMarkerPath(23, 0, 16);
	SetMarkerPath(23, 1, 80);
	SetMarkerPath(23, 2, 81);
	SetMarkerPath(24, 0, 25);
	SetMarkerPath(24, 1, 62);
	SetMarkerPath(25, 0, 63);
	SetMarkerPath(25, 1, 24);
	SetMarkerPath(26, 0, 83);
	SetMarkerPath(26, 1, 27);
	SetMarkerPath(27, 0, 83);
	SetMarkerPath(27, 1, 26);
	SetMarkerPath(27, 2, 82);
	SetMarkerPath(28, 0, 17);
	SetMarkerPath(28, 1, 51);
	SetMarkerPath(29, 0, 30);
	SetMarkerPath(29, 1, 68);
	SetMarkerPath(30, 0, 69);
	SetMarkerPath(30, 1, 29);
	SetMarkerPath(30, 2, 68);
	SetMarkerPath(31, 0, 39);
	SetMarkerPath(31, 1, 75);
	SetMarkerPath(32, 0, 86);
	SetMarkerPath(32, 1, 88);
	SetMarkerPath(33, 0, 67);
	SetMarkerPath(34, 0, 61);
	SetMarkerPath(34, 1, 60);
	SetMarkerPath(35, 0, 48);
	SetMarkerPath(35, 1, 49);
	SetMarkerPath(36, 0, 12);
	SetMarkerPath(36, 1, 6);
	SetMarkerPath(36, 2, 71);
	SetMarkerPath(36, 3, 79);
	SetMarkerPath(36, 4, 11);
	SetMarkerPath(37, 0, 84);
	SetMarkerPath(37, 1, 83);
	SetMarkerPath(38, 0, 74);
	SetMarkerPath(38, 1, 9);
	SetMarkerPath(38, 2, 8);
	SetMarkerPath(39, 0, 70);
	SetMarkerPath(39, 1, 31);
	SetMarkerPath(4, 0, 13);
	SetMarkerPath(40, 0, 10);
	SetMarkerPath(40, 1, 90);
	SetMarkerPath(41, 0, 81);
	SetMarkerPath(41, 1, 82);
	SetMarkerPath(42, 1, 19);
	SetMarkerPath(42, 2, 47);
	SetMarkerPath(42, 3, 46);
	SetMarkerPath(42, 4, 44);
	SetMarkerPath(43, 0, 22);
	SetMarkerPath(44, 0, 42);
	SetMarkerPath(44, 1, 45);
	SetMarkerPath(44, 3, 21);
	SetMarkerPath(45, 0, 44);
	SetMarkerPath(45, 1, 70);
	SetMarkerPath(45, 2, 79);
	SetMarkerPath(45, 3, 71);
	SetMarkerPath(46, 0, 42);
	SetMarkerPath(47, 0, 42);
	SetMarkerPath(47, 1, 48);
	SetMarkerPath(48, 0, 47);
	SetMarkerPath(48, 1, 35);
	SetMarkerPath(48, 2, 55);
	SetMarkerPath(49, 0, 35);
	SetMarkerPath(49, 1, 50);
	SetMarkerPath(5, 1, 87);
	SetMarkerPath(5, 2, 61);
	SetMarkerPath(5, 3, 90);
	SetMarkerPath(50, 0, 49);
	SetMarkerPath(50, 1, 17);
	SetMarkerPath(50, 2, 51);
	SetMarkerPath(51, 0, 28);
	SetMarkerPath(51, 1, 50);
	SetMarkerPath(51, 2, 52);
	SetMarkerPath(52, 0, 51);
	SetMarkerPath(52, 2, 54);
	SetMarkerPath(53, 1, 86);
	SetMarkerPath(54, 0, 52);
	SetMarkerPath(54, 1, 18);
	SetMarkerPath(55, 0, 48);
	SetMarkerPath(55, 1, 59);
	SetMarkerPath(56, 0, 20);
	SetMarkerPath(57, 0, 60);
	SetMarkerPath(57, 1, 58);
	SetMarkerPath(58, 0, 57);
	SetMarkerPath(58, 1, 59);
	SetMarkerPath(59, 0, 58);
	SetMarkerPath(59, 1, 55);
	SetMarkerPath(6, 0, 36);
	SetMarkerPath(6, 1, 71);
	SetMarkerPath(60, 0, 34);
	SetMarkerPath(60, 1, 61);
	SetMarkerPath(60, 2, 57);
	SetMarkerPath(61, 0, 62);
	SetMarkerPath(61, 1, 34);
	SetMarkerPath(61, 2, 60);
	SetMarkerPath(61, 3, 69);
	SetMarkerPath(62, 0, 61);
	SetMarkerPath(62, 1, 24);
	SetMarkerPath(62, 2, 63);
	SetMarkerPath(63, 0, 64);
	SetMarkerPath(63, 1, 25);
	SetMarkerPath(63, 2, 62);
	SetMarkerPath(64, 0, 65);
	SetMarkerPath(64, 1, 63);
	SetMarkerPath(64, 2, 62);
	SetMarkerPath(64, 3, 18);
	SetMarkerPath(65, 0, 69);
	SetMarkerPath(65, 1, 66);
	SetMarkerPath(65, 2, 64);
	SetMarkerPath(65, 3, 68);
	SetMarkerPath(66, 0, 65);
	SetMarkerPath(66, 1, 68);
	SetMarkerPath(66, 2, 67);
	SetMarkerPath(66, 3, 69);
	SetMarkerPath(67, 0, 66);
	SetMarkerPath(67, 1, 33);
	SetMarkerPath(68, 0, 66);
	SetMarkerPath(68, 1, 69);
	SetMarkerPath(68, 2, 30);
	SetMarkerPath(68, 3, 29);
	SetMarkerPath(68, 4, 4);
	SetMarkerPath(68, 5, 65);
	SetMarkerPath(69, 0, 18);
	SetMarkerPath(69, 1, 65);
	SetMarkerPath(69, 2, 68);
	SetMarkerPath(69, 3, 30);
	SetMarkerPath(69, 4, 66);
	SetMarkerPath(7, 0, 41);
	SetMarkerPath(70, 0, 71);
	SetMarkerPath(70, 1, 45);
	SetMarkerPath(70, 2, 39);
	SetMarkerPath(71, 0, 6);
	SetMarkerPath(71, 1, 79);
	SetMarkerPath(71, 2, 45);
	SetMarkerPath(71, 3, 36);
	SetMarkerPath(71, 4, 72);
	SetMarkerPath(71, 5, 70);
	SetMarkerPath(72, 0, 73);
	SetMarkerPath(72, 1, 71);
	SetMarkerPath(73, 0, 74);
	SetMarkerPath(73, 1, 72);
	SetMarkerPath(74, 0, 73);
	SetMarkerPath(74, 1, 38);
	SetMarkerPath(75, 0, 31);
	SetMarkerPath(75, 1, 76);
	SetMarkerPath(76, 0, 75);
	SetMarkerPath(76, 1, 77);
	SetMarkerPath(77, 0, 76);
	SetMarkerPath(77, 1, 78);
	SetMarkerPath(78, 0, 77);
	SetMarkerPath(78, 1, 80);
	SetMarkerPath(79, 0, 45);
	SetMarkerPath(79, 1, 12);
	SetMarkerPath(79, 2, 71);
	SetMarkerPath(79, 3, 36);
	SetMarkerPath(8, 0, 38);
	SetMarkerPath(8, 1, 9);
	SetMarkerPath(8, 2, 7);
	SetMarkerPath(80, 0, 23);
	SetMarkerPath(80, 1, 81);
	SetMarkerPath(80, 2, 78);
	SetMarkerPath(81, 0, 80);
	SetMarkerPath(81, 1, 23);
	SetMarkerPath(81, 2, 41);
	SetMarkerPath(82, 0, 27);
	SetMarkerPath(82, 1, 83);
	SetMarkerPath(82, 2, 41);
	SetMarkerPath(83, 0, 85);
	SetMarkerPath(83, 1, 37);
	SetMarkerPath(83, 2, 26);
	SetMarkerPath(83, 3, 27);
	SetMarkerPath(83, 4, 82);
	SetMarkerPath(84, 0, 37);
	SetMarkerPath(84, 1, 16);
	SetMarkerPath(85, 0, 83);
	SetMarkerPath(85, 1, 86);
	SetMarkerPath(85, 2, 88);
	SetMarkerPath(85, 3, 87);
	SetMarkerPath(86, 0, 85);
	SetMarkerPath(86, 1, 32);
	SetMarkerPath(86, 2, 88);
	SetMarkerPath(87, 0, 88);
	SetMarkerPath(87, 1, 5);
	SetMarkerPath(87, 2, 85);
	SetMarkerPath(88, 0, 86);
	SetMarkerPath(88, 1, 85);
	SetMarkerPath(88, 2, 32);
	SetMarkerPath(88, 3, 87);
	SetMarkerPath(89, 0, 13);
	SetMarkerPath(89, 1, 15);
	SetMarkerPath(89, 2, 14);
	SetMarkerPath(89, 4, 58);
	SetMarkerPath(9, 0, 38);
	SetMarkerPath(9, 1, 8);
	SetMarkerPath(9, 2, 7);
	SetMarkerPath(90, 0, 5);
	SetMarkerPath(90, 1, 40);
	SetMarkerPath(90, 2, 30);

	SetMarkerPathFlags(13, 2, JUMP_LEDGE);
	SetMarkerPathFlags(14, 0, JUMP_LEDGE);
	SetMarkerPathFlags(14, 2, JUMP_LEDGE);
	SetMarkerPathFlags(5, 2, JUMP_LEDGE);
	SetMarkerPathFlags(5, 3, JUMP_LEDGE);
	SetMarkerPathFlags(53, 1, JUMP_LEDGE);
	SetMarkerPathFlags(61, 3, JUMP_LEDGE);
	SetMarkerPathFlags(64, 3, JUMP_LEDGE);
	SetMarkerPathFlags(89, 2, JUMP_LEDGE);
	SetMarkerPathFlags(89, 4, JUMP_LEDGE);
	SetMarkerPathFlags(90, 0, JUMP_LEDGE);
	SetMarkerPathFlags(90, 2, JUMP_LEDGE);

	SetMarkerViewOffset(13, -2);
	SetMarkerViewOffset(41, -10);
}

#endif
