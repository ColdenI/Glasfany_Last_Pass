
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <Random.h>
#include <chrono>
#include <thread>
#include <cmath>

using namespace sf;
using namespace std;

const string version = "official_version_of_CI-1.1.27-(patch-0.2)_Colden_I_Production";


const string passwordV = "ASD35-H7G9-UTF5-85K3-DD0L-COLD-FFH64-EN0I-GTI9-KCV4-86G5-9920-OPL7-FHT98FH764HG5HGUYHN646UG5NBTG545-TTYU6";
const string password = passwordV+"--tV*K*YF*9_K*ei4++9J4/Rc_/5+1_Zp_J/h6/7ByL4_9Jp+Wr374148Q+_G*25d2_*-o_5c95C+589T27Y5H1b_b6265/O4f5Hv9_5561K2-_97/81-*wxaQ2C2PJ966*Q//2+V-_/Og2+E-hu982X*+*j_o_5c95C+589T27Y5H1b_b6265/O4f5Hv9_5561K2-_97/81-*wxaQ2C2PJ966*Q//2+V-_/Og2+E-hu982X*+*j_o_5c95C+589T27Y5H1b_b6265/O4f5Hv9_5561K2-_97/81-*wxaQ2C2PJ966*Q//2+V-_/Og2+E-hu982X*+*j_o_5c95C+589T27Y5H1b_b6265/O4f5Hv9_5561K2-_97/81-*wxaQ2C2PJ966*Q//2+V-_/Og2+E-hu982X*+*j_o_5c95C6nciJY*-2-S_**6qw*e7**uG+973*U5-853d6_W332E__P_Tb9*p/*/_/_s2DDO1Rx3FV+8/Q/";
//play var
bool start_Play;
int isDialog;
bool consolE = 0;
bool colib = 0;

long chest_1, chest_2, chest_3, chest_4, coal, iron, gold, diamond, silver, wood, pickaxe, axe, stal, sword, bow, arrow, armor, level, level_war = -99, ex, zele_reg, zele_pow = 0;
float live = 100, atak=0, prot=0, atak_zel, live_m, atak_m, monst;

int market = 1;

int cvest=-9999, cv_progres=-9999;

int volume_m = 100;
int volume_s = 10;

int scrine = 0;

int anim = 0;
float Fps__ = 0;
float time_ = 0;
long n_fps = 0;

void save_data_all();
void batlle();
bool loading_data_ReadFile();
void console();
void mine(int index);
void save_data(string _nameF);
bool loading_config_setings_ReadFile();
string load_text(string name_file);


int door[3] = {0,0,0};
int door_[3] = { 1,1,1 };

int mine_ore_R[35] = {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int forest_res[3] = {0,0,0};

bool music_2 = 0;
bool finish = 0;
bool open_castle_panel = 0;
bool open_batlle_panel = 0;
bool open_task_panel = 0, open_task2_panel = 0, open_task3_panel = 0, open_task4_panel = 0, open_task5_panel = 0, open_task6_panel = 0, open_task7_panel = 0, open_task8_panel = 0;;

bool open_1LE = 0, open_4LE = 0, open_100LE = 0, open_1000LE = 0;
int Dialo = 0;

Sprite PL;


Texture f10; Texture f; Texture f3; Texture f4; Texture f5; Texture f6; Texture f7; Texture f8; Texture f9; Texture f2; Texture f1; Texture f11; Texture f12;



class Mine {
public:
    bool is_dig;
    int res;
};

Mine st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12, st13, st14, st15, st16, st17,st18,
st19, st20, st21, st22, st23, st24, st25, st26, st27, st28, st29, st30, st31, st32, st33, st34, st35;

SoundBuffer sound_1, sound_2, sound_3, sound_4, sound_5, sound_6, sound_7, sound_8, sound_9, sound_10, sound_11, sound_12, sound_13, sound_14, sound_15, sound_16, sound_17, sound_18, sound_19, sound_20, sound_21, sound_22, sound_23, sound_24, sound_25, sound_26, sound_27;

Sound start_sound,click,door_s,ef1,ef2,ef3,GaOv,gor1,gorD,obo1,obo2,oboD,ork1,ork2,orkD,plD,tro1,troD,ved1,ved2,vedD,vedD2,list,man_1,man_2,hello;
Image icon;
Texture ore_stone, ore_coal, ore_stone_, ore_iron, ore_gold, ore_diamond, ore_sera, forest_0, forest_1, forest_2, forest_3, monster_0, but1, but2, but3, but4, but5, but6, but7, but8, but9, but10, but11, but12, but13, but14, but15, but16,
but17, but18, but19, but20, but21, but22, but23, but24, but25, but26, but27, but28, but29, but30, but31, but32, but33, but34, but35, but9_, but10_, but11_, HElper_1, HElper_2, HElper_3, HElper_4,
bt_m1, bt_m2, bt_m3, bt_m4, bt_m5, bt_m6, bt_m7, bt_m8, bt_m9, bt_m10, bt_m11, bt_m12, bt_m13, bt_m14, bt_m15, bt_m16, bt_m17, bt_m18, bt_m19, bt_m20, bt_m21, bt_m22, bt_m23, bt_m24, bt_m25, bt_m26, bt_m27, pan1, pan2, bt_fo1, bt_fo2, bt_fo3, bt_fo4, bt_fo5, bt_fo6,
arm0, arm1, arm2, arm3, scastlepanel_1, scastlepanel_2, scastlepanel_3, scastlepanel_4, scastlepanel_5, swo0, swo1, swo2, swo3, swo4, dor0, dor1, bow0, bow1, monster_1, monster_2, monster_3, monster_4, monster_5,
bt_tm1, bt_tm2, bt_tm3, bt_tm_in_0, bt_tm_in_1, bt_CIt;

Sprite btM_1, btM_2, btM_3, btM_4, btM_5, btM_6, btM_7, btM_8, btM_9, btM_10, btM_11, btM_12, btM_13, btM_14, btM_15, btM_16, btM_17, btM_18, btM_19, btM_20, btM_21, btM_22, btM_23, btM_24, btM_25, btM_26, btM_27, btM_28, btM_29, btM_30, 
btM_31, btM_32, btM_33, btM_34, btM_35, btF_1, btF_2, btF_3, button_start, button_back, button_main_map, button_ivent, button_mine_in, button_mine_reboot, button_save, button_inv_chest_1, button_inv_chest_2, button_inv_chest_3,
button_inv_chest_4, button_forest_in, button_forest_reboot, button_setings, button_plus, button_minus, button_fog_in, button_cast_in, button_atak, button_book_in, bt_help, bt_mine, bt_towerM, bt_forest, bt_forges, bt_castle,
bt_market, liVE, button_market_in, button_market_res, bt_task, helper, Bt_m1, panel_bt, button_plus_, button_minus_, panel_mine, bt_fog_1, bt_fog_2, bt_fog_3, bt_fog_4, bt_fog_5, bt_fog_6, item1, castle_panel, item2, door1, door2, door3,
MR_ch1, MR_ch2, MR_ch3, item3, monster, Bt_TM1, Bt_TM2, Bt_TM3, bt_TM_in, bt_ci;

Font font1, font2;
Music music, music2;


void loading_fileT1() {
    cout << "\nGlasfany >> attempt to load textures-1";
    //texture
    {
        btM_1.setScale(0.4, 0.4);    btM_1.setPosition(260, 220 + 40);
        btM_2.setScale(0.4, 0.4);    btM_2.setPosition(330, 220 + 40);
        btM_3.setScale(0.4, 0.4);    btM_3.setPosition(400, 220 + 40);
        btM_4.setScale(0.4, 0.4);    btM_4.setPosition(470, 220 + 40);
        btM_5.setScale(0.4, 0.4);    btM_5.setPosition(540, 220 + 40);
        btM_6.setScale(0.4, 0.4);    btM_6.setPosition(610, 220 + 40);
        btM_7.setScale(0.4, 0.4);    btM_7.setPosition(680, 220 + 40);
        btM_8.setScale(0.4, 0.4);    btM_8.setPosition(260, 290 + 40);
        btM_9.setScale(0.4, 0.4);    btM_9.setPosition(330, 290 + 40);
        btM_10.setScale(0.4, 0.4);   btM_10.setPosition(400, 290 + 40);
        btM_11.setScale(0.4, 0.4);   btM_11.setPosition(470, 290 + 40);
        btM_12.setScale(0.4, 0.4);   btM_12.setPosition(540, 290 + 40);
        btM_13.setScale(0.4, 0.4);   btM_13.setPosition(610, 290 + 40);
        btM_14.setScale(0.4, 0.4);   btM_14.setPosition(680, 290 + 40);
        btM_15.setScale(0.4, 0.4);   btM_15.setPosition(260, 360 + 40);
        btM_16.setScale(0.4, 0.4);   btM_16.setPosition(330, 360 + 40);
        btM_17.setScale(0.4, 0.4);   btM_17.setPosition(400, 360 + 40);
        btM_18.setScale(0.4, 0.4);   btM_18.setPosition(470, 360 + 40);
        btM_19.setScale(0.4, 0.4);   btM_19.setPosition(540, 360 + 40);
        btM_20.setScale(0.4, 0.4);   btM_20.setPosition(610, 360 + 40);
        btM_21.setScale(0.4, 0.4);   btM_21.setPosition(680, 360 + 40);
        btM_22.setScale(0.4, 0.4);   btM_22.setPosition(260, 430 + 40);
        btM_23.setScale(0.4, 0.4);   btM_23.setPosition(330, 430 + 40);
        btM_24.setScale(0.4, 0.4);   btM_24.setPosition(400, 430 + 40);
        btM_25.setScale(0.4, 0.4);   btM_25.setPosition(470, 430 + 40);
        btM_26.setScale(0.4, 0.4);   btM_26.setPosition(540, 430 + 40);
        btM_27.setScale(0.4, 0.4);   btM_27.setPosition(610, 430 + 40);
        btM_28.setScale(0.4, 0.4);   btM_28.setPosition(680, 430 + 40);
        btM_29.setScale(0.4, 0.4);   btM_29.setPosition(260, 500 + 40);
        btM_30.setScale(0.4, 0.4);   btM_30.setPosition(330, 500 + 40);
        btM_31.setScale(0.4, 0.4);   btM_31.setPosition(400, 500 + 40);
        btM_32.setScale(0.4, 0.4);   btM_32.setPosition(470, 500 + 40);
        btM_33.setScale(0.4, 0.4);   btM_33.setPosition(540, 500 + 40);
        btM_34.setScale(0.4, 0.4);   btM_34.setPosition(610, 500 + 40);
        btM_35.setScale(0.4, 0.4);   btM_35.setPosition(680, 500 + 40);
        //ore
        ore_stone.loadFromFile("gamedata/texture/mine/ore/block_stone-1.png");
        ore_coal.loadFromFile("gamedata/texture/mine/ore/block_coal-1.png");
        ore_iron.loadFromFile("gamedata/texture/mine/ore/block_iron-1.png");
        ore_gold.loadFromFile("gamedata/texture/mine/ore/block_gold-1.png");
        ore_diamond.loadFromFile("gamedata/texture/mine/ore/block_diamond-1.png");
        ore_sera.loadFromFile("gamedata/texture/mine/ore/block_sera-1.png");
        ore_stone_.loadFromFile("gamedata/texture/mine/ore/block_stone-2.png");

        forest_0.loadFromFile("gamedata/texture/forest/bt_wood-1.png");
        forest_1.loadFromFile("gamedata/texture/forest/bt_wood_1-1.png");
        forest_2.loadFromFile("gamedata/texture/forest/bt_wood_2-1.png");
        forest_3.loadFromFile("gamedata/texture/forest/bt_wood_3-1.png");

        btF_1.setScale(1, 1);   btF_1.setPosition(250, 200);
        btF_2.setScale(1, 1);   btF_2.setPosition(500, 200);
        btF_3.setScale(1, 1);   btF_3.setPosition(750, 200);

        PL.setTexture(ore_stone);
        PL.setScale(0.5, 0.5);

        f10.loadFromFile("gamedata/texture/fons/fon_mark-1.png");
        f.loadFromFile("gamedata/texture/fons/fon_map-1.png");
        f3.loadFromFile("gamedata/texture/fons/fon_title-1.png");
        f4.loadFromFile("gamedata/texture/fons/fon_invent-1.png");
        f5.loadFromFile("gamedata/texture/fons/fon_forest-1.png");

    }
}
void loading_fileT5() {
    cout << "\nGlasfany >> attempt to load textures-5";
    //texture
    {
        f12.loadFromFile("gamedata/texture/fons/fon_towerM-1.png");
        f11.loadFromFile("gamedata/texture/fons/fon_setings-1.png");
        f6.loadFromFile("gamedata/texture/fons/fon_forges-1.png");
        f7.loadFromFile("gamedata/texture/fons/fon_castle-1.png");
        f8.loadFromFile("gamedata/texture/fons/fon_batlle-1.png");
        f9.loadFromFile("gamedata/texture/fons/fon_bok-1.png");
        f2.loadFromFile("gamedata/texture/fons/fon_mine-1.png");
        f1.loadFromFile("gamedata/texture/fons/fon_tab-1.png");
    }
}
void loading_fileT2() {
    cout << "\nGlasfany >> attempt to load textures-2";
    //texture2
    {
        monster_0.loadFromFile("gamedata/texture/monsters/teste_.png");
        but1.loadFromFile("gamedata/texture/buttons/button_n-1.png");
        button_start.setTexture(but1);
        button_start.setScale(1, 0.9);
        button_start.setPosition(490, 360);
        but3.loadFromFile("gamedata/texture/buttons/button_back-1.png");
        button_back.setTexture(but3);
        button_back.setScale(0.6, 0.6);
        button_back.setPosition(1130, 735);
        but2.loadFromFile("gamedata/texture/buttons/button_map-1.png");
        button_main_map.setTexture(but2);
        button_main_map.setScale(0.5, 0.5);
        button_main_map.setPosition(10, 670);
        but4.loadFromFile("gamedata/texture/buttons/button_ivent-1.png");
        button_ivent.setTexture(but4);
        button_ivent.setScale(0.7, 0.7);
        button_ivent.setPosition(1140, 670);
        but5.loadFromFile("gamedata/texture/buttons/mine/button_mine_in-1.png");
        button_mine_in.setTexture(but5);
        button_mine_in.setScale(-0.9, 0.9);
        button_mine_in.setPosition(240, 670);
        but6.loadFromFile("gamedata/texture/buttons/mine/button_mine_reboot-2.png");
        button_mine_reboot.setTexture(but6);
        button_mine_reboot.setScale(0.6, 0.5);
        button_mine_reboot.setPosition(910, 470);
        but7.loadFromFile("gamedata/texture/buttons/button_save-3.png");
        button_save.setTexture(but7);
        button_save.setScale(0.25, 0.25);
        button_save.setPosition(1260, 5);
        but8.loadFromFile("gamedata/texture/buttons/chest/button_chest-1.png");
        button_inv_chest_1.setTexture(but8);
        button_inv_chest_1.setScale(1, 1);
        button_inv_chest_1.setPosition(550, 550);
        but9.loadFromFile("gamedata/texture/buttons/chest/button_chest-2.png");
        button_inv_chest_2.setTexture(but9);
        button_inv_chest_2.setScale(1, 1);
        button_inv_chest_2.setPosition(720, 540);
        but10.loadFromFile("gamedata/texture/buttons/chest/button_chest-3.png");
        button_inv_chest_3.setTexture(but10);
        button_inv_chest_3.setScale(1, 1);
        button_inv_chest_3.setPosition(890, 550);
        but11.loadFromFile("gamedata/texture/buttons/chest/button_chest-4.png");
        button_inv_chest_4.setTexture(but11);
        button_inv_chest_4.setScale(1, 1);
        button_inv_chest_4.setPosition(1060, 550);
        but9_.loadFromFile("gamedata/texture/buttons/chest/button_chest-2_.png");
        but10_.loadFromFile("gamedata/texture/buttons/chest/button_chest-3_.png");
        but11_.loadFromFile("gamedata/texture/buttons/chest/button_chest-4_.png");
        but12.loadFromFile("gamedata/texture/buttons/forest/button_forest_in-1.png");
        button_forest_in.setTexture(but12);
        button_forest_in.setScale(1, 1);
        button_forest_in.setPosition(1170, 10);
        but13.loadFromFile("gamedata/texture/buttons/forest/button_forest_reboot-1.png");
        button_forest_reboot.setTexture(but13);
        button_forest_reboot.setScale(1, 1);
        button_forest_reboot.setPosition(1100, 500);
        but14.loadFromFile("gamedata/texture/buttons/button_setings-1.png");
        button_setings.setTexture(but14);
        button_setings.setScale(0.3, 0.3);
        button_setings.setPosition(10, 10);
        but15.loadFromFile("gamedata/texture/buttons/button_plus-1.png");
        button_plus.setTexture(but15);
        button_plus.setScale(0.3, 0.3);
        button_plus.setPosition(300, 150);
        but16.loadFromFile("gamedata/texture/buttons/button_minus-1.png");
        button_minus.setTexture(but16);
        button_minus.setScale(0.3, 0.3);
        button_minus.setPosition(100, 150);
        but17.loadFromFile("gamedata/texture/buttons/forges/button_forges_in-1.png");
        button_fog_in.setTexture(but17);
        button_fog_in.setScale(-1, 1);
        button_fog_in.setPosition(900, 550);
        but18.loadFromFile("gamedata/texture/buttons/castle/button_castle_in-1.png");
        button_cast_in.setTexture(but18);
        button_cast_in.setScale(1, 1);
        button_cast_in.setPosition(20, 20);
        but19.loadFromFile("gamedata/texture/buttons/castle/button_batlle-1.png");
        button_atak.setTexture(but19);
        button_atak.setScale(1, 1);
        button_atak.setPosition(550, 700);
        but20.loadFromFile("gamedata/texture/buttons/book/button_book_in-2.png");
        button_book_in.setScale(0.9, 0.9);
        button_book_in.setTexture(but20);
        button_book_in.setPosition(30, 400);
        but21.loadFromFile("gamedata/texture/buttons/book/bt_help-1.png");
        bt_help.setTexture(but21);
        bt_help.setPosition(750, 120);
    }


}
void loading_fileT3() {
    cout << "\nGlasfany >> attempt to load textures-3";
    //rexture3
    { 
        bt_CIt.loadFromFile("gamedata/texture/buttons/bt_colden_i-1.png");
        bt_ci.setTexture(bt_CIt);
        bt_ci.setPosition(1200, 5);

        but22.loadFromFile("gamedata/texture/buttons/book/bt_mine-1.png");
        bt_mine.setTexture(but22);
        bt_mine.setPosition(900, 120);
        but23.loadFromFile("gamedata/texture/buttons/book/bt_towerM-1.png");
        bt_towerM.setTexture(but23);
        bt_towerM.setPosition(970, 120);
        but24.loadFromFile("gamedata/texture/buttons/book/bt_forest-1.png");
        bt_forest.setTexture(but24);
        bt_forest.setPosition(900, 185);
        but25.loadFromFile("gamedata/texture/buttons/book/bt_forges-1.png");
        bt_forges.setTexture(but25);
        bt_forges.setPosition(970, 185);
        but26.loadFromFile("gamedata/texture/buttons/book/bt_castle-1.png");
        bt_castle.setTexture(but26);
        bt_castle.setPosition(1040, 120);
        but27.loadFromFile("gamedata/texture/buttons/book/bt_market-1.png");
        bt_market.setTexture(but27);
        bt_market.setPosition(1040, 185);
        but28.loadFromFile("gamedata/texture/items/hear.png");
        liVE.setTexture(but28);
        liVE.setPosition(200, 50);
        but29.loadFromFile("gamedata/texture/buttons/market/button_market_in-0.png");
        but30.loadFromFile("gamedata/texture/buttons/market/button_market_in-1.png");
        button_market_in.setTexture(but29);
        button_market_in.setPosition(800, 200);
        but31.loadFromFile("gamedata/texture/market/bt_res-1.png");
        button_market_res.setTexture(but31);
        button_market_res.setPosition(900, 220);
        but32.loadFromFile("gamedata/texture/buttons/book/bt_task.png");
        bt_task.setTexture(but32);
        bt_task.setPosition(750, 330);
        HElper_1.loadFromFile("gamedata/texture/helper/helper-1.png");
        HElper_2.loadFromFile("gamedata/texture/helper/helper-2.png");
        HElper_3.loadFromFile("gamedata/texture/helper/helper-3.png");
        HElper_4.loadFromFile("gamedata/texture/helper/helper-4.png");
        helper.setTexture(monster_0);
        helper.setPosition(5500, 7000);
        bt_m1.loadFromFile("gamedata/texture/market/bt_MR-1.png");
        bt_m2.loadFromFile("gamedata/texture/market/bt_MR-2.png");
        bt_m3.loadFromFile("gamedata/texture/market/bt_MR-3.png");
        bt_m4.loadFromFile("gamedata/texture/market/bt_MR-4.png");
        bt_m5.loadFromFile("gamedata/texture/market/bt_MR-5.png");
        bt_m6.loadFromFile("gamedata/texture/market/bt_MR-6.png");
        bt_m7.loadFromFile("gamedata/texture/market/bt_MR-7.png");
        bt_m8.loadFromFile("gamedata/texture/market/bt_MR-8.png");
        bt_m9.loadFromFile("gamedata/texture/market/bt_MR-9.png");
        bt_m10.loadFromFile("gamedata/texture/market/bt_MR-10.png");
        bt_m11.loadFromFile("gamedata/texture/market/bt_MR-11.png");
        bt_m12.loadFromFile("gamedata/texture/market/bt_MR-12.png");
        bt_m13.loadFromFile("gamedata/texture/market/bt_MR-13.png");
        bt_m14.loadFromFile("gamedata/texture/market/bt_MR-14.png");
        bt_m15.loadFromFile("gamedata/texture/market/bt_MR-15.png");
        bt_m16.loadFromFile("gamedata/texture/market/bt_MR-16.png");
        bt_m17.loadFromFile("gamedata/texture/market/bt_MR-17.png");
        bt_m18.loadFromFile("gamedata/texture/market/bt_MR-18.png");
        bt_m19.loadFromFile("gamedata/texture/market/bt_MR-19.png");
        bt_m20.loadFromFile("gamedata/texture/market/bt_MR-20.png");
        bt_m21.loadFromFile("gamedata/texture/market/bt_MR-21.png");
        bt_m22.loadFromFile("gamedata/texture/market/bt_MR-22.png");
        bt_m23.loadFromFile("gamedata/texture/market/bt_MR-23.png");
        bt_m24.loadFromFile("gamedata/texture/market/bt_MR-24.png");
        bt_m25.loadFromFile("gamedata/texture/market/bt_MR-25.png");
        bt_m26.loadFromFile("gamedata/texture/market/bt_MR-26.png");
        bt_m27.loadFromFile("gamedata/texture/market/bt_MR-27.png");
        Bt_m1.setTexture(bt_m1);
        Bt_m1.setPosition(200, 150);
        pan1.loadFromFile("gamedata/texture/castle/chest_panel/panel.png");
        panel_bt.setTexture(pan1);
        panel_bt.setPosition(550, 700);
    }
}
void loading_fileT4() {
    cout << "\nGlasfany >> attempt to load textures-4";

    {

        bt_tm1.loadFromFile("gamedata/texture/buttons/tower/bt_zel_reg.png");
        bt_tm2.loadFromFile("gamedata/texture/buttons/tower/bt_reg.png");
        bt_tm3.loadFromFile("gamedata/texture/buttons/tower/bt_zel_pow.png");
        Bt_TM1.setTexture(bt_tm1);
        Bt_TM2.setTexture(bt_tm2);
        Bt_TM3.setTexture(bt_tm3);
        Bt_TM1.setPosition(200, 300);
        Bt_TM2.setPosition(500, 290);
        Bt_TM3.setPosition(800, 300);
        bt_TM_in.setPosition(350, 400);
        bt_tm_in_0.loadFromFile("gamedata/texture/buttons/tower/bt_TM_in-0.png");
        bt_tm_in_1.loadFromFile("gamedata/texture/buttons/tower/bt_TM_in-1.png");
        button_plus_.setTexture(but15);
        button_plus_.setScale(0.3, 0.3);
        button_plus_.setPosition(300, 300);
        button_minus_.setTexture(but16);
        button_minus_.setScale(0.3, 0.3);
        button_minus_.setPosition(100, 300);
        pan2.loadFromFile("gamedata/texture/mine/panel_mine-2.png");
        panel_mine.setTexture(pan2);
        panel_mine.setScale(0.7, 0.6);
        panel_mine.setPosition(770, 100);
        bt_fo1.loadFromFile("gamedata/texture/forges/bt_forges-1.png");
        bt_fo2.loadFromFile("gamedata/texture/forges/bt_forges-2.png");
        bt_fo3.loadFromFile("gamedata/texture/forges/bt_forges-3.png");
        bt_fo4.loadFromFile("gamedata/texture/forges/bt_forges-4.png");
        bt_fo5.loadFromFile("gamedata/texture/forges/bt_forges-5.png");
        bt_fo6.loadFromFile("gamedata/texture/forges/bt_forges-6.png");
        bt_fog_1.setTexture(bt_fo1);
        bt_fog_1.setScale(1, 1);
        bt_fog_1.setPosition(170, 200);
        bt_fog_2.setTexture(bt_fo2);
        bt_fog_2.setScale(1, 1);
        bt_fog_2.setPosition(470, 200);
        bt_fog_3.setTexture(bt_fo3);
        bt_fog_3.setScale(1, 1);
        bt_fog_3.setPosition(770, 200);
        bt_fog_4.setTexture(bt_fo4);
        bt_fog_4.setScale(1, 1);
        bt_fog_4.setPosition(170, 400);
        bt_fog_5.setTexture(bt_fo5);
        bt_fog_5.setScale(1, 1);
        bt_fog_5.setPosition(470, 400);
        bt_fog_6.setTexture(bt_fo6);
        bt_fog_6.setScale(1, 1);
        bt_fog_6.setPosition(770, 400);
        arm0.loadFromFile("gamedata/texture/human/man_arm_not-1.png");
        arm1.loadFromFile("gamedata/texture/human/man_arm_iron-1.png");
        arm2.loadFromFile("gamedata/texture/human/man_arm_stal-1.png");
        arm3.loadFromFile("gamedata/texture/human/man_arm_gold-1.png");
        item1.setTexture(arm0);
        item1.setScale(1, 1);
        item1.setPosition(40, 50);
        item1.setTexture(arm0);
        item1.setScale(1, 1);
        item1.setPosition(40, 50);
        scastlepanel_1.loadFromFile("gamedata/texture/castle/chest_panel/chest_1.png");
        scastlepanel_2.loadFromFile("gamedata/texture/castle/chest_panel/chest_2.png");
        scastlepanel_3.loadFromFile("gamedata/texture/castle/chest_panel/chest_3.png");
        scastlepanel_4.loadFromFile("gamedata/texture/castle/chest_panel/chest_4.png");
        scastlepanel_5.loadFromFile("gamedata/texture/castle/chest_panel/sword_.png");
        castle_panel.setTexture(scastlepanel_1);
        castle_panel.setPosition(450, 200);
        swo0.loadFromFile("gamedata/texture/items/sword_i-0.png");
        swo1.loadFromFile("gamedata/texture/items/sword_i-1.png");
        swo2.loadFromFile("gamedata/texture/items/sword_i-2.png");
        swo3.loadFromFile("gamedata/texture/items/sword_i-3.png");
        swo4.loadFromFile("gamedata/texture/items/sword_i-4.png");
        item2.setScale(1, 1);
        item2.setPosition(400, 500);
        dor0.loadFromFile("gamedata/texture/castle/door/button_door-0.png");
        dor1.loadFromFile("gamedata/texture/castle/door/button_door-1.png");
        door1.setTexture(dor1);
        door2.setTexture(dor1);
        door3.setTexture(dor1);
        door1.setPosition(150, 250);
        door2.setPosition(500, 250);
        door3.setPosition(850, 250);
        MR_ch1.setTexture(but9_);
        MR_ch2.setTexture(but10_);
        MR_ch3.setTexture(but11_);
        MR_ch1.setPosition(150, 250);
        MR_ch2.setPosition(500, 250);
        MR_ch3.setPosition(850, 250);
        bow0.loadFromFile("gamedata/texture/items/bow&arrow_i-0.png");
        bow1.loadFromFile("gamedata/texture/items/bow&arrow_i-1.png");
        item3.setScale(1, 1);
        monster_1.loadFromFile("gamedata/texture/monsters/ogre-1.png");
        monster_2.loadFromFile("gamedata/texture/monsters/troll-1.png");
        monster_3.loadFromFile("gamedata/texture/monsters/gargoyle-1.png");
        monster_4.loadFromFile("gamedata/texture/monsters/werewolf-1.png");
        monster_5.loadFromFile("gamedata/texture/monsters/witch-1.png");
        monster.setTexture(monster_0);
    }
}
void loading_fileM() {
    cout << "\nGlasfany >> attempt to load music";
    font2.loadFromFile("gamedata/config/font/inglobal-bold.ttf");//передаем нашему шрифту файл шрифта
    music2.setLoop(true);
    music2.setVolume(volume_m);
    music2.openFromFile("gamedata/audio/music/trac_3.ogg");
    switch (random(1,3))
    {
    case 1:music.openFromFile("gamedata/audio/music/music_1.ogg");
        break;
    case 2:music.openFromFile("gamedata/audio/music/music_2.ogg");
        break;
    case 3:music.openFromFile("gamedata/audio/music/music_4.ogg");
        break;
    }
    music.play();//воспроизводим музыку
    music.setLoop(true);
    music.setVolume(volume_m);
}
void loading_fileS() {
    cout << "\nGlasfany >> attempt to load sounds";
    //sounds
    {
        sound_1.loadFromFile("gamedata/audio/sounds/start_sou.ogg");
        sound_2.loadFromFile("gamedata/audio/sounds/click.ogg");
        start_sound.setBuffer(sound_1);
        click.setBuffer(sound_2);
        sound_3.loadFromFile("gamedata/audio/sounds/door-1.ogg");
        door_s.setBuffer(sound_3);
        sound_4.loadFromFile("gamedata/audio/sounds/ef-1.ogg");
        ef1.setBuffer(sound_4);
        sound_5.loadFromFile("gamedata/audio/sounds/ef-2.ogg");
        ef2.setBuffer(sound_5);
        sound_6.loadFromFile("gamedata/audio/sounds/ef-3.ogg");
        ef3.setBuffer(sound_6);
        sound_7.loadFromFile("gamedata/audio/sounds/GaOv.ogg");
        GaOv.setBuffer(sound_7);
        sound_8.loadFromFile("gamedata/audio/sounds/gor-1.ogg");
        gor1.setBuffer(sound_8);
        sound_9.loadFromFile("gamedata/audio/sounds/gor-d.ogg");
        gorD.setBuffer(sound_9);
        sound_10.loadFromFile("gamedata/audio/sounds/obo-1.ogg");
        obo1.setBuffer(sound_10);
        sound_11.loadFromFile("gamedata/audio/sounds/obo-2.ogg");
        obo2.setBuffer(sound_11);
        sound_12.loadFromFile("gamedata/audio/sounds/obo-d.ogg");
        oboD.setBuffer(sound_12);
        sound_13.loadFromFile("gamedata/audio/sounds/ork-1.ogg");
        ork1.setBuffer(sound_13);
        sound_14.loadFromFile("gamedata/audio/sounds/ork-2.ogg");
        ork2.setBuffer(sound_14);
        sound_15.loadFromFile("gamedata/audio/sounds/ork-d.ogg");
        orkD.setBuffer(sound_15);
        sound_16.loadFromFile("gamedata/audio/sounds/pl-d.ogg");
        plD.setBuffer(sound_16);
        sound_17.loadFromFile("gamedata/audio/sounds/tro-1.ogg");
        tro1.setBuffer(sound_17);
        sound_18.loadFromFile("gamedata/audio/sounds/tro-d.ogg");
        troD.setBuffer(sound_18);
        sound_19.loadFromFile("gamedata/audio/sounds/ved-1.ogg");
        ved1.setBuffer(sound_19);
        sound_20.loadFromFile("gamedata/audio/sounds/ved-2.ogg");
        ved2.setBuffer(sound_20);
        sound_21.loadFromFile("gamedata/audio/sounds/ved-d.ogg");
        vedD.setBuffer(sound_21);
        sound_22.loadFromFile("gamedata/audio/sounds/ved-d2.ogg");
        vedD2.setBuffer(sound_22);
        sound_23.loadFromFile("gamedata/audio/sounds/list.ogg");
        list.setBuffer(sound_23);
        sound_24.loadFromFile("gamedata/audio/sounds/man_1.ogg");
        man_1.setBuffer(sound_24);
        sound_25.loadFromFile("gamedata/audio/sounds/man_2.ogg");
        man_2.setBuffer(sound_25);
        sound_26.loadFromFile("gamedata/audio/sounds/hello_t.ogg");
        hello.setBuffer(sound_26);
    }

}

int main()
{

    {
    ifstream Data;
    cout << "\nGlasfany >> version authentication";
    Data.open("gamedata\\config\\c_pas.config");
    string n;
    getline(Data, n);
    if (n != password) {
        return 0;
    }
}

    font1.loadFromFile("gamedata/config/font/CyrilicOld.ttf");//передаем нашему шрифту файл шрифта
    
    
    cout << "\nGlasfany >> the glasfany program welcomes you.\nGlasfany >> files are being checked";
	if (!loading_data_ReadFile()) {
		system("pause");
		return 0;
	}
	srand(time(0));
    cout << "\nGlasfany >> attempt to launch SFML libraries";

	RenderWindow window(VideoMode(1372, 884), "Glasfany");
    icon.loadFromFile("gamedata/texture/icon.png");
    window.setIcon(209, 209, icon.getPixelsPtr());

    Text text("", font1, 30);
    text.setStyle(sf::Text::Bold);//жирный и подчеркнутый текст. по умолчанию он "худой":)) и не подчеркнутый
    ifstream Data;  
    string text1__99;  
    string text_1_;
    string text_2_;
    string text_4_;
    string text_3_;
    string text_5_;
    string text_6_;
    string text_7_;
    string text_8_;
    string text_9_;
    string text_10_;
    for (Data.open("gamedata\\config\\text\\language\\text_1.txt"); !Data.eof();) {
        string n = "";
        getline(Data, n);
        stringstream ss;
            if (n == "<title-1>") {
                getline(Data, n);
                text_1_ = n;
            }
            if (n == "<title-2>") {
                getline(Data, n);
                text_2_ = n;
            }
            if (n == "<title-3>") {
                getline(Data, n);
                text_3_ = n;
            }
            if (n == "<title-4>") {
                getline(Data, n);
                text_4_ = n;
            }
            if (n == "<title-5>") {
                getline(Data, n);
                text_5_ = n;
            }
            if (n == "<title-6>") {
                getline(Data, n);
                text_6_ = n;
            }
            if (n == "<title-8>") {
                getline(Data, n);
                text_8_ = n;
            }
            if (n == "<title-9>") {
                getline(Data, n);
                text_9_ = n;
            }
            if (n == "<title-10>") {
                getline(Data, n);
                text_10_ = n;
            }
            if (n == "<title-7>") {
                getline(Data, n);
                text_7_ = n;
                text_7_ += "\n";
                text_7_ += "\n";
                text_7_ += "\n";
                getline(Data, n);
                text_7_ += n;
                text_7_ += "\n";
                text_7_ += "\n";
                text_7_ += "\n";
                getline(Data, n);
                text_7_ += n;
                text_7_ += "\n";
                text_7_ += "\n";
                text_7_ += "\n";
                getline(Data, n);
                text_7_ += n;
                text_7_ += "\n";
                text_7_ += "\n";
                text_7_ += "\n";
                getline(Data, n);
                text_7_ += n;
            }
        if (start_Play) {
            if (n == "<start_button_title-2>") {
                getline(Data, n);
                text1__99 = n;
            }
        }
        else {
            if (n == "<start_button_title-1>") {
                getline(Data, n);
                text1__99 = n;
            }
        }
    }
    Data.close();
    text.setString(text1__99);//задает строку тексту   
    text.setPosition(562,385);//задаем позицию текста, центр камеры
    Text text_inv_chest_bt_1(text_1_, font1, 20); 
    text_inv_chest_bt_1.setPosition(562, 385);
    Text text_inv_chest_bt_2(text_1_, font1, 20);
    text_inv_chest_bt_2.setPosition(562, 485);
    Text text_inv_chest_bt_3(text_1_, font1, 20);
    text_inv_chest_bt_3.setPosition(562, 585);
    Text text_inv_chest_bt_4(text_1_, font1, 20);
    text_inv_chest_bt_4.setPosition(562, 685); 
    Text text_set_(text_4_, font1, 45);
    text_set_.setPosition(580, 10);
    Text text_set_1(text_2_, font1, 30);
    text_set_1.setPosition(100, 100);
    Text text_set_2(text_3_, font1, 30);
    text_set_2.setPosition(100, 250);
    Text text_set_1_1("0", font1, 40);
    text_set_1_1.setPosition(210, 160);
    Text text_set_2_1("0", font1, 40);
    text_set_2_1.setPosition(210, 310);
    text_set_.setStyle(sf::Text::Bold);
    Text t_colib("", font2, 13);
    t_colib.setString("colib");//задает строку тексту   
    t_colib.setPosition(6,10);//задаем позицию текста, центр камеры
    t_colib.setFillColor(Color::Green);
    Text text_batlle(text_6_, font1, 40);  text_batlle.setPosition(590, 722);
    Text text_mine_pickaxe("-9999", font2, 30);  text_mine_pickaxe.setPosition(970, 183);
    Text text_mine_coal("-9999", font2, 30);  text_mine_coal.setPosition(890, 230);
    Text text_mine_iron("-9999", font2, 30);  text_mine_iron.setPosition(1040, 230);
    Text text_mine_gold("-9999", font2, 30);  text_mine_gold.setPosition(890, 270);
    Text text_mine_diamond("-9999", font2, 30);  text_mine_diamond.setPosition(1040, 270);  
    Text text_inv_level("-9999", font2, 35);  text_inv_level.setPosition(1270, 55); text_inv_level.setFillColor(Color::Yellow);
    Text text_inv_coal("-9999", font2, 25);  text_inv_coal.setPosition(595, 95);
    Text text_inv_iron("-9999", font2, 25);  text_inv_iron.setPosition(595, 175);
    Text text_inv_gold("-9999", font2, 25);  text_inv_gold.setPosition(595, 255);
    Text text_inv_diamond("-9999", font2, 25);  text_inv_diamond.setPosition(595, 335);
    Text text_inv_silver("-9999", font2, 25);  text_inv_silver.setPosition(595, 415);
    Text text_inv_stal("-9999", font2, 25);  text_inv_stal.setPosition(595, 495);
    Text text_inv_wood("-9999", font2, 25);  text_inv_wood.setPosition(715, 95);
    Text text_inv_pickaxe("-9999", font2, 25);  text_inv_pickaxe.setPosition(715, 175);
    Text text_inv_axe("-9999", font2, 25);  text_inv_axe.setPosition(715, 255);
    Text text_inv_zele_reg("-9999", font2, 25);  text_inv_zele_reg.setPosition(715, 335);
    Text text_inv_zele_pow("-9999", font2, 25);  text_inv_zele_pow.setPosition(715, 415);
    Text text_inv_arrow("-9999", font2, 25);  text_inv_arrow.setPosition(715, 495);
    Text text_inv_live("-9999", font2, 30);  text_inv_live.setPosition(250, 55);
    Text text_inv_chest_1("-9999", font2, 25);  text_inv_chest_1.setPosition(835, 95);
    Text text_inv_chest_2("-9999", font2, 25);  text_inv_chest_2.setPosition(835, 175);
    Text text_inv_chest_3("-9999", font2, 25);  text_inv_chest_3.setPosition(835, 255);
    Text text_inv_chest_4("-9999", font2, 25);  text_inv_chest_4.setPosition(835, 335);
    Text text_for_wood("-9999", font2, 40);  text_for_wood.setPosition(1160, 170);
    Text text_for_axe("-9999", font2, 40);  text_for_axe.setPosition(1160, 90);
    Text text_mar_chest_2(text_9_, font1, 25);  text_mar_chest_2.setPosition(360, 645);
    Text text_mar_chest_3(text_9_, font1, 25);  text_mar_chest_3.setPosition(660, 650);
    Text text_mar_chest_4(text_9_, font1, 25);  text_mar_chest_4.setPosition(960, 650);
    Text text_fog_coal("-9999", font2, 40); text_fog_coal.setPosition(1190, 80);
    Text text_fog_iron("-9999", font2, 40);  text_fog_iron.setPosition(1190, 150);
    Text text_fog_wood("-9999", font2, 40); text_fog_wood.setPosition(1190, 220);
    Text text_fog_silver("-9999", font2, 40); text_fog_silver.setPosition(1190, 290);
    Text text_fog_stal("-9999", font2, 40);  text_fog_stal.setPosition(1190, 355);
    Text text_cast_level_war("-9999", font1, 30);  text_cast_level_war.setPosition(60, 40);
    Text text_bal_pan(text_7_, font1, 30); 
    Text text_batl_a1("-9999", font2, 40); text_batl_a1.setPosition(95, 110);
    Text text_batl_l1("-9999", font2, 40); text_batl_l1.setPosition(95, 40);
    Text text_batl_a2("-9999", font2, 40); text_batl_a2.setPosition(1105, 110);
    Text text_batl_l2("-9999", font2, 40); text_batl_l2.setPosition(1105, 40);
    Text text_t_(text_8_, font1, 25); text_t_.setPosition(150, 100);
    Text text_b_t(text_10_, font1, 35); text_b_t.setPosition(750, 300);
    text_t_.setFillColor(Color::Black);

    Text text_z1(text_9_, font1, 25);  text_z1.setPosition(265, 510);
    Text text_z2(text_9_, font1, 25);  text_z2.setPosition(565, 510);
    Text text_z3(text_9_, font1, 25);  text_z3.setPosition(865, 510);

    Clock clock;
    int dial_start = 0;
    for (int i = 0; i < 10; i++) {
        if (window.isOpen())cout << "\nGlasfany >> successful "<<i<<" launch of components";
        Sleep(20);
    }

    Text text_diamond_y("-9999", font2, 40); text_diamond_y.setPosition(1200, 30);

    Text text_loading("", font1, 35); text_loading.setPosition(650, 775);
    Texture f_load;
    f_load.loadFromFile("gamedata/texture/fons/fon_loading-1.png");
    Sprite loading_fon(f_load);
    Texture f_load_;
    f_load_.loadFromFile("gamedata/texture/items/loading_ind.png");
    Sprite loading_(f_load_);

    for (int i = 0; i < 100; i++) {
        loading_.setPosition(i*4,750);
        window.draw(loading_);
        window.draw(loading_fon); 
        stringstream ss;    ss << i;
        string text_o_;     ss >> text_o_;
        string nh = text_o_ + "%";
        text_loading.setString(nh); 
        Sleep(random(10,20));
        if(i==15)loading_fileS();
        if (i == 37)loading_fileT1();
        if (i == 52)loading_fileT5();
        if (i == 43)loading_fileT2();
        if (i == 68)loading_fileT3();
        if (i == 85)loading_fileM();
        if (i == 92)loading_fileT4();
        window.draw(text_loading);      
        window.display();
        window.clear();
    } 
    
    




    float an_mine = 0;
    

    Sprite fon1(f1); Sprite fon2(f2); Sprite fon13(f9); Sprite fon14(f8); Sprite fon9(f7); Sprite fon6(f6); Sprite fon12(f5); Sprite fon3(f4); Sprite fon0(f3); Sprite fon(f); Sprite fon10(f10); Sprite fon11(f11);
    Sprite fon8(f12);
   start_sound.play();

    while (window.isOpen())
    {



        time_ = clock.getElapsedTime().asSeconds(); //дать прошедшее время в микросекундах
        if (time_ >= 1) {
            clock.restart();
            n_fps = 0;
        }
        Fps__ = floor(n_fps / time_);        
        n_fps++;
        //

        Vector2i mouse_post = Mouse::getPosition(window);
    {
        stringstream ss;
        ss << scrine;
        string colib_text1;
        ss >> colib_text1;
        stringstream ss1;
        ss1 << ex;
        string colib_text2;
        ss1 >> colib_text2;
        stringstream ss2;
        ss2 << level;
        string colib_text3;
        ss2 >> colib_text3;
        stringstream ss3;
        ss3 << cvest;
        string colib_text4;
        ss3 >> colib_text4;
        stringstream ss4;
        ss4 << passwordV;
        string colib_text5;
        ss4 >> colib_text5;
        stringstream ss5;
        anim++; if (anim >= 30000)anim = -30000;
        ss5 << Fps__;
        string colib_text6;
        ss5 >> colib_text6;
        stringstream ss6;
        ss6 << version;
        string colib_text7;
        ss6 >> colib_text7;
        string colib_tit = "calibration\nscrene " + colib_text1+"\nex "+colib_text2+"\nlevel "+colib_text3+"\ntask "+colib_text4+"\npassword_p "+ colib_text5+"\nFPS "+colib_text6+"\nversion - "+colib_text7;
        t_colib.setString(colib_tit);
    }
    {
        stringstream ss;    ss << pickaxe;
        string text_o_;     ss >> text_o_;
        text_mine_pickaxe.setString(text_o_);
    }
    {
        stringstream ss;    ss << coal;
        string text_o_;     ss >> text_o_;
        text_mine_coal.setString(text_o_);
        text_fog_coal.setString(text_o_);
    }
    {
        stringstream ss;    ss << iron;
        string text_o_;     ss >> text_o_;
        text_mine_iron.setString(text_o_);
        text_fog_iron.setString(text_o_);
    }
    {
        stringstream ss;    ss << gold;
        string text_o_;     ss >> text_o_;
        text_mine_gold.setString(text_o_);
    }
    {
        stringstream ss;    ss << diamond;
        string text_o_;     ss >> text_o_;
        text_mine_diamond.setString(text_o_);
    }

    {
        stringstream ss;    ss << level;
        string text_o_;     ss >> text_o_;
        text_inv_level.setString(text_o_);
    }
    {
        stringstream ss;    ss << coal;
        string text_o_;     ss >> text_o_;
        text_inv_coal.setString(text_o_);
    }
    {
        stringstream ss;    ss << iron;
        string text_o_;     ss >> text_o_;
        text_inv_iron.setString(text_o_);
    }
    {
        stringstream ss;    ss << gold;
        string text_o_;     ss >> text_o_;
        text_inv_gold.setString(text_o_);
    }
    {
        stringstream ss;    ss << diamond;
        string text_o_;     ss >> text_o_;
        text_inv_diamond.setString(text_o_);
        text_diamond_y.setString(text_o_);
    }
    {
        stringstream ss;    ss << silver;
        string text_o_;     ss >> text_o_;
        text_inv_silver.setString(text_o_);
        text_fog_silver.setString(text_o_);
    }
    {
        stringstream ss;    ss << stal;
        string text_o_;     ss >> text_o_;
        text_inv_stal.setString(text_o_);
        text_fog_stal.setString(text_o_);
    }
    {
        stringstream ss;    ss << wood;
        string text_o_;     ss >> text_o_;
        text_inv_wood.setString(text_o_);
        text_fog_wood.setString(text_o_);
    }
    {
        stringstream ss;    ss << pickaxe;
        string text_o_;     ss >> text_o_;
        text_inv_pickaxe.setString(text_o_);
    }
    {
        stringstream ss;    ss << axe;
        string text_o_;     ss >> text_o_;
        text_inv_axe.setString(text_o_);
    }
    {
        stringstream ss;    ss << zele_reg;
        string text_o_;     ss >> text_o_;
        text_inv_zele_reg.setString(text_o_);
    }
    {
        stringstream ss;    ss << zele_pow;
        string text_o_;     ss >> text_o_;
        text_inv_zele_pow.setString(text_o_);
    }
    {
        stringstream ss;    ss << arrow;
        string text_o_;     ss >> text_o_;
        text_inv_arrow.setString(text_o_);
    }
    {
        stringstream ss;    ss << chest_1;
        string text_o_;     ss >> text_o_;
        text_inv_chest_1.setString(text_o_);
    }
    {
        stringstream ss;    ss << chest_2;
        string text_o_;     ss >> text_o_;
        text_inv_chest_2.setString(text_o_);
    }
    {
        stringstream ss;    ss << chest_3;
        string text_o_;     ss >> text_o_;
        text_inv_chest_3.setString(text_o_);
    }
    {
        stringstream ss;    ss << chest_4;
        string text_o_;     ss >> text_o_;
        text_inv_chest_4.setString(text_o_);
    }

    {
        stringstream ss;    ss << axe;
        string text_o_;     ss >> text_o_;
        text_for_axe.setString(text_o_);
    }
    {
        stringstream ss;    ss << wood;
        string text_o_;     ss >> text_o_;
        text_for_wood.setString(text_o_);
    }
    
    {
        stringstream ss;    ss << volume_s;
        string text_o_;     ss >> text_o_;
        text_set_1_1.setString(text_o_);
    }
    {
        stringstream ss;    ss << volume_m;
        string text_o_;     ss >> text_o_;
        text_set_2_1.setString(text_o_);
    }
    
    {
        stringstream ss;    ss << level_war;
        string text_o_;     ss >> text_o_;
        string text___1 = text_5_ + " " + text_o_;
        text_cast_level_war.setString(text___1);
    }

    {
        stringstream ss;    ss << live;
        string text_o_;     ss >> text_o_;
        text_batl_l1.setString(text_o_);
        text_inv_live.setString(text_o_);
    }
    {
        stringstream ss;    ss << atak;
        string text_o_;     ss >> text_o_;
        text_batl_a1.setString(text_o_);
    }

    {
        stringstream ss;    ss << cvest;
        string text_o_;     ss >> text_o_;
        string text_O_ = text_10_ + " " + text_o_;
        text_b_t.setString(text_O_);
    }


    if (cvest == 8)
        if (gold >= 1000) {
            open_task8_panel = 1;
            cvest++;
            cv_progres = 0;
            dial_start = 0;
            scrine = 13;
            diamond += 100;
            coal += 300;
            save_data("autosave");
            save_data("task 8 completed");
        }

    if (cvest == 7)
        if (cv_progres >= 5) {
            open_task7_panel = 1;
            cvest++;
            cv_progres = 0;
            armor = 3;
            {
                music.play();
                for (int i = volume_m; i > 0; i--) {
                    Sleep(3);
                    music2.setVolume(i);
                }
                music.setVolume(0);
                for (int i = 0; i < volume_m; i++) {
                    Sleep(3);
                    music.setVolume(i);
                }
                music2.pause();
            }
            music_2 = 0;
            dial_start = 0;
            scrine = 13;
            save_data("autosave");
            save_data("task 7 completed");
        }

    if (cvest == 6)
        if (coal >= 1500) {
            open_task6_panel = 1;
            cvest++;
            dial_start = 0;
            diamond += 50;
            scrine = 13;
            iron += 100;
            save_data("autosave");
            save_data("task 6 completed");
        }

    if (cvest == 5)
        if (cv_progres >= 17) {
            open_task5_panel = 1;
            cvest++;
            cv_progres = 0;
            {
                music.play();
                for (int i = volume_m; i > 0; i--) {
                    Sleep(3);
                    music2.setVolume(i);
                }
                music.setVolume(0);
                for (int i = 0; i < volume_m; i++) {
                    Sleep(3);
                    music.setVolume(i);
                }
                music2.pause();
            }
            music_2 = 0;
            arrow += 20;
            dial_start = 0;
            scrine = 13;
            sword = 4;
            save_data("autosave");
            save_data("task 5 completed");
        }

    if (cvest == 4)
        if (diamond >= 200) {
            open_task4_panel = 1;
            cvest++;
            dial_start = 0;
            scrine = 13;
            bow = 1;
            silver += 10000;
            arrow += 10;
            save_data("autosave");
            save_data("task 4 completed");
        }

    if (cvest == 3)
        if (cv_progres >= 25) {
            open_task3_panel = 1;
            cvest++;
            armor = 2;
            {
                music.play();
                for (int i = volume_m; i > 0; i--) {
                    Sleep(3);
                    music2.setVolume(i);
                }
                music.setVolume(0);
                for (int i = 0; i < volume_m; i++) {
                    Sleep(3);
                    music.setVolume(i);
                }
                music2.pause();
            }
            music_2 = 0;
            cv_progres = 0;
            dial_start = 0;
            scrine = 13;
            if (sword < 3) sword = 3;
            save_data("autosave");
            save_data("task 3 completed");
        }

    if(cvest==2)
        if (cv_progres >= 15) {
            open_task2_panel = 1;
            cvest++;
            armor = 1;
            {
                music.play();
                for (int i = volume_m; i > 0; i--) {
                    Sleep(3);
                    music2.setVolume(i);
                }
                music.setVolume(0);
                for (int i = 0; i < volume_m; i++) {
                    Sleep(3);
                    music.setVolume(i);
                }
                music2.pause();
            }
            music_2 = 0;
            cv_progres = 0;
            dial_start = 0;
            scrine = 13;
            if (sword < 2) sword = 2;
            save_data("autosave");
            save_data("task 2 completed");
        }

    if (level_war >= 100) {
        finish = 1;
        scrine = 13;
        dial_start = 0;
        level_war = 0;
        {
            music.play();
            for (int i = volume_m; i > 0; i--) {
                Sleep(3);
                music2.setVolume(i);
            }
            music.setVolume(0);
            for (int i = 0; i < volume_m; i++) {
                Sleep(3);
                music.setVolume(i);
            }
            music2.pause();
        }
        music_2 = 0;
    }

    if(cvest==1)
        if (diamond >= 15) {
            open_task_panel = 1;
            cvest++;
            dial_start = 0;
            scrine = 13;
            if(sword<1) sword = 1;
            save_data("autosave");
            save_data("task 1 completed");
        }

    if (ex >= 1000) {
        level++;
        ex -= 1000;
        {
            if (level == 1) { chest_3++; silver += 500; }
            else if (level == 2) { chest_2++; silver += 200; diamond += 1; }
            else if (level == 3) { chest_2++; silver += 200; diamond += 2; }
            else if (level == 4) { chest_2++; chest_1++; diamond += 4; }
            else if (level == 5) { chest_3++; chest_1 += 3; diamond += 2; }
            else if (level == 6) { chest_2++; silver += 300; }
            else if (level == 7) { chest_2++; silver += 300; }
            else if (level == 8) { chest_2++; diamond += 5; }
            else if (level == 9) { chest_2++; silver += 400; diamond += 2; }
            else if (level == 10) { chest_4++;  diamond += 10; }
            else if (level == 11) { chest_2++; silver += 0; diamond += 1; }
            else if (level == 12) { chest_2++; silver += 500; }
            else if (level == 13) { chest_2++; gold += 15; }
            else if (level == 14) { chest_2++; silver += 100; }
            else if (level == 15) { chest_3++; wood += 100; }
            else if (level == 16) { chest_1++; iron += 30; }
            else if (level == 17) { chest_2++;  diamond += 1; }
            else if (level == 18) { chest_2 += 2;  stal += 20; }
            else if (level == 19) { chest_1 += 3;  gold += 10; }
            else if (level == 20) { chest_4 += 1;  diamond += 15; silver += 2000; }
            else if ((level > 20) && (level < 30)) { chest_2 += 2; }
            else if (level == 30) { chest_4++; silver += 3000; diamond += 20; }
            else if ((level > 30) && (level < 40)) { chest_2 += 2; chest_1 += 2; }
            else if (level == 40) { chest_4++; silver += 4000; diamond += 25; }
            else if ((level > 40) && (level < 50)) { chest_2 += 3; }
            else if (level == 50) { chest_4 += 2; diamond += 50; silver += 10000; }
            else if ((level > 50) && (level < 60)) { chest_2 += 4; silver += 600; }
            else if (level == 60) { chest_4++; chest_3++; }
            else if ((level > 60) && (level < 70)) { chest_2 += 4; silver += 700; }
            else if (level == 70) { chest_4++; chest_3++; diamond += 20; }
            else if ((level > 70) && (level < 80)) { chest_2 += 4; silver += 800; }
            else if (level == 80) { chest_4++; chest_3++; diamond += 20; }
            else if ((level > 80) && (level < 90)) { chest_2 += 4; silver += 900; }
            else if (level == 90) { chest_4++; chest_3++; diamond += 25; }
            else if ((level > 90) && (level < 100)) { chest_2 += 4; silver += 1000; diamond++; }
            else if (level == 100) { chest_4 += 3; chest_2 += 5; diamond += 100; silver += 50000; coal += 100; pickaxe += 100; axe += 100; wood += 100; iron += 100; gold += 100; stal += 100; }
            else if ((level > 100) && (level < 1000)) { chest_3 += 2; chest_1 += 5; }
            else if (level == 1000) { chest_4 += 5; chest_3 += 10; chest_2 += 15; chest_1 += 25; diamond += 1000; silver += 200000; coal += 1000; pickaxe += 1000; axe += 1000; wood += 1000; iron += 1000; gold += 1000; stal += 1000; }
        }

        if (level == 1) {
            open_1LE = 1;
            dial_start = 0;
            scrine = 13;
        }
        if (level == 4) {
            open_4LE = 1;
            dial_start = 0;
            scrine = 13;
        }
        if (level == 100) {
            open_100LE = 1;
            dial_start = 0;
            scrine = 13;
        }
        if (level == 1000) {
            open_1000LE = 1;
            dial_start = 0;
            scrine = 13;
        }
    }


		Event event;
		while (window.pollEvent(event))
		{
            if (event.type == Event::Closed) {
                window.close();
                //сохранение
                if (scrine != 14) {
                    save_data("autosave");
                    cout << "\n\nGlasfany >> attempt to close the program\n";
                }else cout << "\n\nGlasfany >> you can't save the game now!\n";
            }

            if (Keyboard::isKeyPressed(Keyboard::F9)) {
                colib = !colib;
                Sleep(300);
            }


            switch (scrine)
            {
            case 0:
                if(Mouse::isButtonPressed(Mouse::Left))
                    if (button_start.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        Sleep(20);
                        click.play();
                        if (start_Play)
                            scrine = 1;
                        else
                            scrine = 13;
                        cout << "\nGlasfany >> screen translation to: " << scrine;                     
                    }
                if (Keyboard::isKeyPressed(Keyboard::Space)) {
                    Sleep(20);
                    click.play();
                    if (start_Play)
                        scrine = 1;
                    else
                        scrine = 13;
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                }


                break;
            case 1:
                if (Keyboard::isKeyPressed(Keyboard::M)) {
                    Sleep(20);
                    scrine = 2;
                    Sleep(40);
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_main_map.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 2;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                      Sleep(200);
                    }

                if (Keyboard::isKeyPressed(Keyboard::I)) {
                    Sleep(20);
                    scrine = 3;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_ivent.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 3;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Keyboard::isKeyPressed(Keyboard::S)) {
                    Sleep(100);
                    click.play();
                    save_data("autosave");
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_save.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        Sleep(20);
                        click.play();
                        save_data("autosave");
                    }

                if (Keyboard::isKeyPressed(Keyboard::B)) {              
                    scrine = 13;
                    text_t_.setString(text_8_);
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_book_in.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 13;
                        text_t_.setString(text_8_);
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_setings.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 11;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                break;
            case 2:
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 1;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 1;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_mine_in.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {                      
                        scrine = 4;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_TM_in.getGlobalBounds().contains(mouse_post.x, mouse_post.y))  
                        if (level >= 4) {
                        scrine = 8;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_forest_in.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 12;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                       Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_fog_in.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 6;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_cast_in.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) 
                        if(level>=4)
                        if(sword>0){
                        scrine = 9;
                        if(random(1,2)==1)ef1.play(); else if (random(1, 2) == 1)ef2.play(); else ef3.play();
                        {
                            for (int i = volume_m; i > 0; i--) {
                                Sleep(3);
                                music.setVolume(i);
                            }
                            music_2 = 1;
                            music.setVolume(0);
                            for (int i = 0; i < volume_m; i++) {
                                Sleep(3);
                                music2.setVolume(i);
                            }
                            music2.play();
                            music.pause();
                        }
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        if (door_[0] == 1 && door_[1] == 1 && door_[2] == 1) {
                            for (int i = 0; i < 3; i++) door[i] = random(1, 3);
                            while ((door[0] == door[1]) || (door[0] == door[2]) || (door[1] == door[2])) for (int i = 0; i < 3; i++) door[i] = random(1, 3);
                        }
                        //cout << "\n" << door[0] << " " << door[1] << " " << door[2];
                        Sleep(200);
                        }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_market_in.getGlobalBounds().contains(mouse_post.x, mouse_post.y))
                        if (level >= 4){
                                scrine = 10;
                                market = random(1, 27);
                                cout << "\nGlasfany >> screen translation to: " << scrine;
                                Sleep(200);
                            }

                

                break;
            case 3:
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 1;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 1;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_inv_chest_1.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (chest_1 >= 1) {
                            chest_1--;
                            silver += random(0, 10);
                            wood += random(1, 5);
                            iron += random(4, 8);
                            coal += random(8, 13);
                            axe += random(1, 5);
                            ex += 10;
                        }
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_inv_chest_2.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (chest_2 >= 1) {
                            chest_2--;
                            silver += random(10, 19);
                            wood += random(5, 9);
                            iron += random(8, 16);
                            coal += random(12, 19);
                            pickaxe += random(3, 8);
                            ex += 50;
                        }
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_inv_chest_3.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (chest_3 >= 1) {
                            chest_3--;
                            silver += random(100, 300);
                            iron += random(17, 24);
                            coal += random(20, 30);
                            gold += random(5, 9);
                            diamond += random(3, 7);
                            ex += 100;
                        }
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_inv_chest_4.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (chest_4 >= 1) {
                            chest_4--;
                            silver += random(800, 1600);
                            iron += random(25, 50);
                            gold += random(20, 35);
                            diamond += random(9, 12);
                            ex += 500;
                            if (random(1, 4) == 1)zele_reg++;
                        }
                        click.play();
                        Sleep(200);
                    }

                if (Keyboard::isKeyPressed(Keyboard::Num1) || Keyboard::isKeyPressed(Keyboard::Numpad1)) {
                    if (chest_1 >= 1) {
                        chest_1--;
                        silver += random(0, 10);
                        wood += random(1, 5);
                        iron += random(4, 8);
                        coal += random(8, 13);
                        axe += random(1, 5);
                        ex += 10;
                    }
                    click.play();
                    Sleep(200);
                }
                if (Keyboard::isKeyPressed(Keyboard::Num2) || Keyboard::isKeyPressed(Keyboard::Numpad2)) {
                    if (chest_2 >= 1) {
                        chest_2--;
                        silver += random(10, 19);
                        wood += random(5, 9);
                        iron += random(8, 16);
                        coal += random(12, 19);
                        pickaxe += random(3, 8);
                        ex += 50;
                    }
                    click.play();
                    Sleep(200);
                }
                if (Keyboard::isKeyPressed(Keyboard::Num3) || Keyboard::isKeyPressed(Keyboard::Numpad3)) {
                    if (chest_3 >= 1) {
                        chest_3--;
                        silver += random(100, 300);
                        iron += random(17, 24);
                        coal += random(20, 30);
                        gold += random(5, 9);
                        diamond += random(3, 7);
                        ex += 100;
                    }
                    click.play();
                    Sleep(200);
                }
                if (Keyboard::isKeyPressed(Keyboard::Num4) || Keyboard::isKeyPressed(Keyboard::Numpad4)) {
                    if (chest_4 >= 1) {
                        chest_4--;
                        silver += random(800, 1600);
                        iron += random(25, 50);
                        gold += random(20, 35);
                        diamond += random(9, 12);
                        ex += 500;
                        if (random(1, 4) == 1)zele_reg++;
                    }
                    click.play();
                    Sleep(200);
                }


                if (Mouse::isButtonPressed(Mouse::Left))
                    if (text_inv_zele_pow.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (zele_pow >= 1) {
                            atak_zel += 0.5;
                            zele_pow--;
                            click.play();
                            Sleep(200);
                        }
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (text_inv_zele_reg.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (zele_reg >= 1&&live<=80) {
                            live += 30;
                            if (live > 100)live = 100;
                            zele_reg--;
                            click.play();
                            Sleep(200);
                        }
                    }


                break;
            case 4:
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 2;
                    Sleep(100);
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 2;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_mine_reboot.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                         
                        click.play();

                        st1.is_dig = 0; st2.is_dig = 0; st3.is_dig = 0; st4.is_dig = 0; st5.is_dig = 0; st6.is_dig = 0; st7.is_dig = 0;
                        st8.is_dig = 0; st9.is_dig = 0; st10.is_dig = 0; st11.is_dig = 0; st12.is_dig = 0; st13.is_dig = 0; st14.is_dig = 0;
                        st15.is_dig = 0; st16.is_dig = 0; st17.is_dig = 0; st18.is_dig = 0; st19.is_dig = 0; st20.is_dig = 0; st21.is_dig = 0;
                        st22.is_dig = 0; st23.is_dig = 0; st24.is_dig = 0; st25.is_dig = 0; st26.is_dig = 0; st27.is_dig = 0; st28.is_dig = 0;
                        st29.is_dig = 0; st30.is_dig = 0; st31.is_dig = 0; st32.is_dig = 0; st33.is_dig = 0; st34.is_dig = 0; st35.is_dig = 0;
                        for (int i = 0; i < 35; i++) mine_ore_R[i] = 0;
                        for (int i = 0; i < 35; i++) if (random(1, 4) == 1) mine_ore_R[i] = 1;
                        for (int i = 0; i < 35; i++) if (random(1, 7) == 1) mine_ore_R[i] = 2;
                        for (int i = 0; i < 35; i++) if (random(1, 11) == 1) mine_ore_R[i] = 3;
                        for (int i = 0; i < 35; i++) if (random(1, 19) == 1)mine_ore_R[i] = 4;
                        Sleep(300);  
                        //сохранить
                    }

                if (Keyboard::isKeyPressed(Keyboard::R)) {
                    st1.is_dig = 0; st2.is_dig = 0; st3.is_dig = 0; st4.is_dig = 0; st5.is_dig = 0; st6.is_dig = 0; st7.is_dig = 0;
                    st8.is_dig = 0; st9.is_dig = 0; st10.is_dig = 0; st11.is_dig = 0; st12.is_dig = 0; st13.is_dig = 0; st14.is_dig = 0;
                    st15.is_dig = 0; st16.is_dig = 0; st17.is_dig = 0; st18.is_dig = 0; st19.is_dig = 0; st20.is_dig = 0; st21.is_dig = 0;
                    st22.is_dig = 0; st23.is_dig = 0; st24.is_dig = 0; st25.is_dig = 0; st26.is_dig = 0; st27.is_dig = 0; st28.is_dig = 0;
                    st29.is_dig = 0; st30.is_dig = 0; st31.is_dig = 0; st32.is_dig = 0; st33.is_dig = 0; st34.is_dig = 0; st35.is_dig = 0;
                    for (int i = 0; i < 35; i++) mine_ore_R[i] = 0;
                    for (int i = 0; i < 35; i++) if (random(1, 4) == 1) mine_ore_R[i] = 1;
                    for (int i = 0; i < 35; i++) if (random(1, 7) == 1) mine_ore_R[i] = 2;
                    for (int i = 0; i < 35; i++) if (random(1, 11) == 1) mine_ore_R[i] = 3;
                    for (int i = 0; i < 35; i++) if (random(1, 19) == 1)mine_ore_R[i] = 4;
                    Sleep(200);
                }

                //отработка кнопок
                {
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_1.getGlobalBounds().contains(mouse_post.x, mouse_post.y)){                        
                                Sleep(100);    mine(1);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_2.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(2);  
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_3.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(3);  
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_4.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(4);  
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_5.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(5);  
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_6.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(6);  
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_7.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(7);  
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_8.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(8);  
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_9.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(9);  
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_10.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(10);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_11.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(11);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_12.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(12);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_13.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(13);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_14.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(14);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_15.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(15);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_16.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(16);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_17.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(17);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_18.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(18);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_19.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(19);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_20.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(20);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_21.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(21);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_22.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(22);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_23.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(23);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_24.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(24);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_25.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(25);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_26.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(26);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_27.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(27);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_28.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(28);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_29.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(29);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_30.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(30);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_31.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(31);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_32.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(32);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_33.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(33);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_34.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(34);     
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (btM_35.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            Sleep(100);    mine(35);     
                        }
                }

                if (Mouse::isButtonPressed(Mouse::Left))save_data("autosave");

                break;
            case 5:


                break;
            case 6:
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 2;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 2;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_fog_2.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if(silver>=5)
                            if(wood>=2)
                                if (iron >= 1) {
                                    ex += 2;
                                    wood -= 2;
                                    iron -= 1;  
                                    silver -= 5;
                                    pickaxe += 5;
                                }
                        Sleep(200);
                        click.play();
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_fog_1.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (silver >= 5)
                            if (coal >= 4)
                                if (iron >= 3) {
                                    ex += 5;
                                    stal += 4;
                                    iron -= 3;
                                    coal -= 4;
                                    silver -= 5;
                                }
                        Sleep(200);
                        click.play();
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_fog_3.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (silver >= 5)
                            if (wood >= 3)
                                if (iron >= 1) {
                                    ex += 2;
                                    wood -= 3;
                                    iron -= 1;
                                    silver -= 5;
                                    axe += 5;
                                }
                        Sleep(200);
                        click.play();
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_fog_4.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if(bow)
                        if (silver >= 3)
                            if (wood >= 1)
                                if (stal >= 1) {
                                    ex += 3;
                                    wood -= 1;
                                    stal -= 1;
                                    silver -= 3;
                                    arrow += 2;
                                }
                        Sleep(200);
                        click.play();
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_fog_5.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (silver >= 3)
                            if (wood >= 2)
                                if (stal >= 1) {
                                    ex += 3;
                                    wood -= 2;
                                    stal -= 1;
                                    silver -= 3;
                                    pickaxe += 5;
                                }
                        Sleep(200);
                        click.play();
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_fog_6.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (silver >= 3)
                            if (wood >= 3)
                                if (stal >= 1) {
                                    ex += 3;
                                    wood -= 3;
                                    stal -= 1;
                                    silver -= 3;
                                    axe += 5;
                                }
                        Sleep(200);
                        click.play();
                    }

                break;
            case 7:


                break;
            case 8:
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 2;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 2;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (Bt_TM1.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (diamond >= 55) {
                            diamond -= 55;
                            zele_reg ++;
                            ex += 100;
                        }
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (Bt_TM2.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (diamond >= 70) {
                            diamond -= 70;
                            live = 100;
                            ex += 100;
                        }
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (Bt_TM3.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (diamond >= 80) {
                            diamond -= 80;
                            zele_pow++;
                            ex += 100;
                        }
                        click.play();
                        Sleep(200);
                    }


                break;
            case 9:
                
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 2;
                    music_2 = 0;
                    {  
                        music.play();                      
                        for (int i = volume_m; i > 0; i--) {
                            Sleep(3);
                            music2.setVolume(i);
                        }
                        music.setVolume(0);
                        for (int i = 0; i < volume_m; i++) {
                            Sleep(3);
                            music.setVolume(i);
                        }
                        music2.pause();
                    }
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 2;
                        click.play();
                        {
                            music.play();
                            for (int i = volume_m; i > 0; i--) {
                                Sleep(3);
                                music2.setVolume(i);
                            }
                            music.setVolume(0);
                            for (int i = 0; i < volume_m; i++) {
                                Sleep(3);
                                music.setVolume(i);
                            }
                            music2.pause();
                        }
                        music_2 = 0;
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }
                
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (castle_panel.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        open_castle_panel = 0;
                        click.play();
                        Sleep(300);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (door1.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) 
                    if(door_[0]!=0){
                        if (door[0] == 1) {
                            door_[0] = 0;
                            int n = random(1, 10);
                            if ((sword < 4)&&(random(1,50)==1)) {
                                castle_panel.setTexture(scastlepanel_5);
                                open_castle_panel = 1;
                                sword = 4;
                            }
                            else {
                                if (n > 4) {
                                    castle_panel.setTexture(scastlepanel_1);
                                    open_castle_panel = 1;
                                    chest_1++;
                                }
                                else if (n == 2 || n == 3 || n == 4) {
                                    castle_panel.setTexture(scastlepanel_2);
                                    open_castle_panel = 1;
                                    chest_2++;
                                }
                                else if (n == 1) {
                                    castle_panel.setTexture(scastlepanel_3);
                                    open_castle_panel = 1;
                                    chest_3++;
                                }
                            }
                            door_s.play();
                        }
                        else if (door[0] == 2) {
                            door_[0] = 0;
                            door_s.play();
                        }
                        else if (door[0] == 3) {
                            door_[0] = 0;   
                            door_s.play();
                            if (level_war < 101)monst = 1;
                            if (level_war > 1)monst = random(1, 2);
                            if (level_war > 5)monst = random(1, 3);
                            if (level_war > 49)monst = random(1, 4);
                            if (level_war > 69)monst = random(1, 5);

                            if (monst == 1) { live_m = 15;  atak_m = 2;  monster.setTexture(monster_1); monster.setPosition(850, 350); }
                            if (monst == 2) { live_m = 10;  atak_m = 4;  monster.setTexture(monster_2); monster.setPosition(950, 450); }
                            if (monst == 3) { live_m = 21;  atak_m = 4;  monster.setTexture(monster_3); monster.setPosition(900, 300); }
                            if (monst == 4) { live_m = 25;  atak_m = 5;  monster.setTexture(monster_4); monster.setPosition(900, 300); }
                            if (monst == 5) { live_m = 15;  atak_m = 9;  monster.setTexture(monster_5); monster.setPosition(950, 300); }
                            scrine = 14;                           
                            cout << "\nGlasfany >> screen translation to: " << scrine;
                        }                     
                        Sleep(200);
                    }
                
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (door2.getGlobalBounds().contains(mouse_post.x, mouse_post.y))
                        if (door_[1] != 0) {
                            if (door[1] == 1) {
                                door_[1] = 0;
                                int n = random(1, 10);
                                if ((sword < 4) && (random(1, 50) == 12)) {
                                    castle_panel.setTexture(scastlepanel_5);
                                    open_castle_panel = 1;
                                    sword = 4;
                                }
                                else {
                                    if (n > 4) {
                                        castle_panel.setTexture(scastlepanel_1);
                                        open_castle_panel = 1;
                                        chest_1++;
                                    }
                                    else if (n == 2 || n == 3 || n == 4) {
                                        castle_panel.setTexture(scastlepanel_2);
                                        open_castle_panel = 1;
                                        chest_2++;
                                    }
                                    else if (n == 1) {
                                        castle_panel.setTexture(scastlepanel_3);
                                        open_castle_panel = 1;
                                        chest_3++;
                                    }
                                }
                                door_s.play();
                            }
                            else if (door[1] == 2) {
                                door_[1] = 0;
                                door_s.play();
                            }
                            else if (door[1] == 3) {
                                door_[1] = 0;
                                door_s.play();
                                if (level_war < 101)monst = 1;
                                if (level_war > 1)monst = random(1, 2);
                                if (level_war > 5)monst = random(1, 3);
                                if (level_war > 49)monst = random(1, 4);
                                if (level_war > 69)monst = random(1, 5);

                                if (monst == 1) { live_m = 15;  atak_m = 2;  monster.setTexture(monster_1); monster.setPosition(850, 350); }
                                if (monst == 2) { live_m = 10;  atak_m = 4;  monster.setTexture(monster_2); monster.setPosition(950, 450); }
                                if (monst == 3) { live_m = 21;  atak_m = 4;  monster.setTexture(monster_3); monster.setPosition(900, 300); }
                                if (monst == 4) { live_m = 25;  atak_m = 5;  monster.setTexture(monster_4); monster.setPosition(900, 300); }
                                if (monst == 5) { live_m = 15;  atak_m = 9;  monster.setTexture(monster_5); monster.setPosition(950, 300); }
                                scrine = 14;
                                cout << "\nGlasfany >> screen translation to: " << scrine;
                            }
                            Sleep(200);
                        }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (door3.getGlobalBounds().contains(mouse_post.x, mouse_post.y))
                        if (door_[2] != 0) {
                            if (door[2] == 1) {
                                door_[2] = 0;
                                int n = random(1, 10);
                                if ((sword < 4) && (random(1, 25) == 12)) {
                                    castle_panel.setTexture(scastlepanel_5);
                                    open_castle_panel = 1;
                                    sword = 4;
                                }
                                else {
                                    if (n > 4) {
                                        castle_panel.setTexture(scastlepanel_1);
                                        open_castle_panel = 1;
                                        chest_1++;
                                    }
                                    else if (n == 2 || n == 3 || n == 4) {
                                        castle_panel.setTexture(scastlepanel_2);
                                        open_castle_panel = 1;
                                        chest_2++;
                                    }
                                    else if (n == 1) {
                                        castle_panel.setTexture(scastlepanel_3);
                                        open_castle_panel = 1;
                                        chest_3++;
                                    }
                                }
                                door_s.play();
                            }
                            else if (door[2] == 2) {
                                door_[2] = 0;
                                door_s.play();
                            }
                            else if (door[2] == 3) {
                                door_[2] = 0;
                                door_s.play();
                                if (level_war < 101)monst = 1;
                                if (level_war > 1)monst = random(1, 2);
                                if (level_war > 5)monst = random(1, 3);
                                if (level_war > 49)monst = random(1, 4);
                                if (level_war > 69)monst = random(1, 5);

                                if (monst == 1) { live_m = 15;  atak_m = 2;  monster.setTexture(monster_1); monster.setPosition(850, 350); }
                                if (monst == 2) { live_m = 10;  atak_m = 4;  monster.setTexture(monster_2); monster.setPosition(950, 450); }
                                if (monst == 3) { live_m = 21;  atak_m = 4;  monster.setTexture(monster_3); monster.setPosition(900, 300); }
                                if (monst == 4) { live_m = 25;  atak_m = 5;  monster.setTexture(monster_4); monster.setPosition(900, 300); }
                                if (monst == 5) { live_m = 15;  atak_m = 9;  monster.setTexture(monster_5); monster.setPosition(950, 300); }
                                scrine = 14;
                                cout << "\nGlasfany >> screen translation to: " << scrine;
                            }
                            Sleep(200);
                        }

                break;
            case 10:
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 1;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 2;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }
                if (Keyboard::isKeyPressed(Keyboard::R)) {
                    market = random(1, 27);
                    click.play();
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_market_res.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        market = random(1, 27);
                        click.play();
                        Sleep(200);
                    }

                if (Keyboard::isKeyPressed(Keyboard::Enter) || Keyboard::isKeyPressed(Keyboard::Space)) {
                    switch (market) {
                    case 1:
                        if (wood >= 3) {
                            wood -= 3; coal += 2; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 2:
                        if (wood >= 6) {
                            wood -= 6; coal += 4; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 3:
                        if (wood >= 30) {
                            wood -= 30; coal += 20; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 4:
                        if (coal >= 2) {
                            coal -= 2; silver += 6; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 5:
                        if (coal >= 20) {
                            coal -= 20; silver += 60; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 6:
                        if (coal >= 10) {
                            coal -= 10; iron += 6; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 7:
                        if (coal >= 21) {
                            coal -= 21; iron += 13; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 8:
                        if (iron >= 6) {
                            iron -= 6; gold += 3; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 9:
                        if (iron >= 24) {
                            iron -= 24; gold += 13; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 10:
                        if (iron >= 3) {
                            iron -= 3; silver += 15; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 11:
                        if (iron >= 27) {
                            iron -= 27; silver += 135; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 12:
                        if (gold >= 4) {
                            gold -= 4; silver += 40; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 13:
                        if (gold >= 40) {
                            gold -= 40; silver += 440; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 14:
                        if (gold >= 9) {
                            gold -= 9; coal += 30; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 15:
                        if (gold >= 54) {
                            gold -= 54; coal += 180; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 16:
                        if (diamond >= 3) {
                            diamond -= 3; iron += 12; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 17:
                        if (diamond >= 12) {
                            diamond -= 12; iron += 48; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 18:
                        if (diamond >= 5) {
                            diamond -= 5; gold += 10; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 19:
                        if (diamond >= 12) {
                            diamond -= 12; gold += 24; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 20:
                        if (silver >= 26) {
                            silver -= 26; wood += 13; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 21:
                        if (silver >= 50) {
                            silver -= 50; wood += 25; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 22:
                        if (silver >= 25) {
                            silver -= 25; iron += 5; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 23:
                        if (silver >= 175) {
                            silver -= 175; iron += 27; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 24:
                        if (silver >= 80) {
                            silver -= 80; gold += 8; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 25:
                        if (silver >= 290) {
                            silver -= 290; gold += 29; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 26:
                        if (silver >= 33) {
                            silver -= 33; coal += 11; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;
                    case 27:
                        if (silver >= 96) {
                            silver -= 96; gold += 32; click.play(); ex += 5;
                            market = random(1, 27);
                        }
                        break;

                    }
                    //                       market = random(1, 27);
                    Sleep(200);
                }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (Bt_m1.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        switch (market){
                        case 1:
                            if (wood >= 3) {
                                wood -= 3; coal += 2; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 2:
                            if (wood >= 6) {
                                wood -= 6; coal += 4; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 3:
                            if (wood >= 30) {
                                wood -= 30; coal += 20; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 4:
                            if (coal >= 2) {
                                coal -= 2; silver += 6; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 5:
                            if (coal >= 20) {
                                coal -= 20; silver += 60; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 6:
                            if (coal >= 10) {
                                coal -= 10; iron += 6; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 7:
                            if (coal >= 21) {
                                coal -= 21; iron += 13; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 8:
                            if (iron >= 6) {
                                iron -= 6; gold += 3; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 9:
                            if (iron >= 24) {
                                iron -= 24; gold += 13; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 10:
                            if (iron >= 3) {
                                iron -= 3; silver += 15; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 11:
                            if (iron >= 27) {
                                iron -= 27; silver += 135; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 12:
                            if (gold >= 4) {
                                gold -= 4; silver += 40; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 13:
                            if (gold >= 40) {
                                gold -= 40; silver += 440; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 14:
                            if (gold >= 9) {
                                gold -= 9; coal += 30; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 15:
                            if (gold >= 54) {
                                gold -= 54; coal += 180; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 16:
                            if (diamond >= 3) {
                                diamond -= 3; iron += 12; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 17:
                            if (diamond >= 12) {
                                diamond -= 12; iron += 48; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 18:
                            if (diamond >= 5) {
                                diamond -= 5; gold += 10; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 19:
                            if (diamond >= 12) {
                                diamond -= 12; gold += 24; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 20:
                            if (silver >= 26) {
                                silver -= 26; wood += 13; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 21:
                            if (silver >= 50) {
                                silver -= 50; wood += 25; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 22:
                            if (silver >= 25) {
                                silver -= 25; iron += 5; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 23:
                            if (silver >= 175) {
                                silver -= 175; iron += 27; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 24:
                            if (silver >= 80) {
                                silver -= 80; gold += 8; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 25:
                            if (silver >= 290) {
                                silver -= 290; gold += 29; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 26:
                            if (silver >= 33) {
                                silver -= 33; coal += 11; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                        case 27:
                            if (silver >= 96) {
                                silver -= 96; gold += 32; click.play(); ex += 5;
                                market = random(1, 27);
                            }
                            break;
                       
                        }
 //                       market = random(1, 27);
                        Sleep(200);
                    }

                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (MR_ch1.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            if (diamond>=10) {
                            click.play();
                            chest_2++;
                            diamond -= 10;
                            }
                            Sleep(200);
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (MR_ch2.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            if (diamond >= 100) {
                                click.play();
                                chest_3++;
                                diamond -= 100;
                            }
                            Sleep(200);
                        }
                    if (Mouse::isButtonPressed(Mouse::Left))
                        if (MR_ch3.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                            if (diamond >= 120) {
                                click.play();
                                chest_4++;
                                diamond -= 120;
                            }
                            Sleep(200);
                        }


                break;
            case 11:
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 1;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 1;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_plus_.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if(volume_m<100)
                        volume_m+=10;
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_minus_.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (volume_m >0)
                            volume_m -= 10;
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_plus.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (volume_s < 100)
                            volume_s += 10;
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_minus.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (volume_s > 0)
                            volume_s -= 10;
                        click.play();
                        Sleep(200);
                    }

                if (Keyboard::isKeyPressed(Keyboard::M))
                    if (Keyboard::isKeyPressed(Keyboard::Equal)|| Keyboard::isKeyPressed(Keyboard::Add))
                        if (volume_m<100){
                            volume_m += 1;
                        }
                if (Keyboard::isKeyPressed(Keyboard::M))
                    if (Keyboard::isKeyPressed(Keyboard::Hyphen) || Keyboard::isKeyPressed(Keyboard::Subtract))
                        if (volume_m > 0) {
                            volume_m -= 1;
                        }
                if (Keyboard::isKeyPressed(Keyboard::S))
                    if (Keyboard::isKeyPressed(Keyboard::Equal) || Keyboard::isKeyPressed(Keyboard::Add))
                        if (volume_s < 100) {
                            volume_s += 1;
                        }
                if (Keyboard::isKeyPressed(Keyboard::S))
                    if (Keyboard::isKeyPressed(Keyboard::Hyphen) || Keyboard::isKeyPressed(Keyboard::Subtract))
                        if (volume_s > 0) {
                            volume_s -= 1;
                        }
                

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_ci.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        system("start https://akylinandrej.wixsite.com/colden-i/glasfany");
                        click.play();
                        Sleep(200);
                    }
                break;
            case 12:
                if (Keyboard::isKeyPressed(Keyboard::B)) {
                    scrine = 2;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 2;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (btF_1.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (forest_res[0] == 0) 
                            if (axe>=1){
                                axe--;
                                int i = random(1, 3);
                                wood += i;
                                ex += 2;
                                forest_res[0] = i;
                                if (random(1, 25) == 1)chest_1 += 1;
                            } 
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (btF_2.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (forest_res[1] == 0)
                            if (axe >= 1) {
                                axe--;
                                int i = random(1, 3);
                                wood += i;
                                ex += 2;
                                forest_res[1] = i;
                                if (random(1, 25) == 1)chest_1 += 1;
                            }
                        click.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (btF_3.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        if (forest_res[2] == 0)
                            if (axe >= 1) {
                                axe--;
                                int i = random(1, 3);
                                wood += i;
                                ex += 2;
                                forest_res[2] = i;
                                if (random(1, 25) == 1)chest_1 += 1;
                            }
                        click.play();
                        Sleep(200);
                    }

                if (Keyboard::isKeyPressed(Keyboard::R)) {
                    for (int i = 0; i < 3; i++) forest_res[i] = 0;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_forest_reboot.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        for (int i = 0; i < 3; i++) forest_res[i] = 0;
                        click.play();
                        Sleep(200);
                    }

                break;
            case 13:
                if (Keyboard::isKeyPressed(Keyboard::B)) if(!finish){
                    scrine = 1;
                    click.play();
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                    Sleep(200);
                }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_back.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 1;
                        click.play();
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_mine.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        string nh = load_text("text_2.txt");
                        text_t_.setString(nh);
                        list.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_forest.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        string nh = load_text("text_3.txt");
                        text_t_.setString(nh);
                        list.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_forges.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        string nh = load_text("text_4.txt");
                        text_t_.setString(nh);
                        list.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_towerM.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        string nh = load_text("text_5.txt");
                        text_t_.setString(nh);
                        list.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_castle.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        string nh = load_text("text_6.txt");
                        text_t_.setString(nh);
                        list.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_market.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        string nh = load_text("text_7.txt");
                        text_t_.setString(nh);
                        list.play();
                        Sleep(200);
                    }
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_help.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        string nh = load_text("text_8.txt");
                        text_t_.setString(nh);
                        list.play();
                        Sleep(200);
                    }

                if (Mouse::isButtonPressed(Mouse::Left))
                    if (helper.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        dial_start++;
                        click.play();
                        Sleep(600);
                        if(!start_Play)if (dial_start == 1)hello.play();else
                        if (random(1, 2) == 1)man_1.play(); else man_2.play();
                        else if (random(1, 2) == 1)man_1.play(); else man_2.play();
                    }
                
                if (Mouse::isButtonPressed(Mouse::Left))
                    if (bt_task.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        string nh;
                        if (cvest == 1) {
                            stringstream ss;    ss << diamond;
                            string text_o_;     ss >> text_o_;
                            nh = load_text("task/p/text_1.txt") + " " + text_o_ + "/15";
                        }
                        else if (cvest == 2) {
                            stringstream ss;    ss << cv_progres;
                            string text_o_;     ss >> text_o_;
                            nh = load_text("task/p/text_2.txt") + " " + text_o_ + "/15";
                        }
                        else if (cvest == 3) {
                            stringstream ss;    ss << cv_progres;
                            string text_o_;     ss >> text_o_;
                            nh = load_text("task/p/text_3.txt") + " " + text_o_ + "/25";
                        }
                        else if (cvest == 4) {
                            stringstream ss;    ss << diamond;
                            string text_o_;     ss >> text_o_;
                            nh = load_text("task/p/text_4.txt") + " " + text_o_ + "/300";
                        }
                        else if (cvest == 5) {
                            stringstream ss;    ss << cv_progres;
                            string text_o_;     ss >> text_o_;
                            nh = load_text("task/p/text_5.txt") + " " + text_o_ + "/17";
                        }
                        else if (cvest == 6) {
                            stringstream ss;    ss << coal;
                            string text_o_;     ss >> text_o_;
                            nh = load_text("task/p/text_6.txt") + " " + text_o_ + "/1500";
                        }
                        else if (cvest == 7) {
                            stringstream ss;    ss << cv_progres;
                            string text_o_;     ss >> text_o_;
                            nh = load_text("task/p/text_7.txt") + " " + text_o_ + "/5";
                        }
                        else if (cvest == 8) {
                            stringstream ss;    ss << gold;
                            string text_o_;     ss >> text_o_;
                            nh = load_text("task/p/text_8.txt") + " " + text_o_ + "/1000";
                        }
                        else if (cvest > 8) {
                            if (random(1, 2)) nh = load_text("task/p/text_9.txt");
                        }

                        text_t_.setString(nh);
                        list.play();
                        Sleep(200);
                    }


                break;
            case 14:


                if (bow == 1 && arrow>0) {
                    if (sword == 1)atak = 4 + atak_zel;
                    if (sword == 2)atak = 6 + atak_zel;
                    if (sword == 3)atak = 8 + atak_zel;
                    if (sword == 4)atak = 10 + atak_zel;
                }
                else {
                    if (sword == 1)atak = 3 + atak_zel;
                    if (sword == 2)atak = 5 + atak_zel;
                    if (sword == 3)atak = 7 + atak_zel;
                    if (sword == 4)atak = 9 + atak_zel;
                }
                


                if (Mouse::isButtonPressed(Mouse::Left))
                    if (panel_bt.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        scrine = 2;
                        GaOv.play();
                        for (int i = 0; i < 3; i++)door_[i] = 1;
                        for (int i = 0; i < 3; i++) door[i] = random(1, 3);
                        while ((door[0] == door[1]) || (door[0] == door[2]) || (door[1] == door[2])) for (int i = 0; i < 3; i++) door[i] = random(1, 3);
                        live = 70;
                        music_2 = 0;
                        {
                            music.play();
                            for (int i = volume_m; i > 0; i--) {
                                Sleep(3);
                                music2.setVolume(i);
                            }
                            music.setVolume(0);
                            for (int i = 0; i < volume_m; i++) {
                                Sleep(3);
                                music.setVolume(i);
                            }
                            music2.pause();
                        }
                        level_war -= 10;
                        if (level_war < 0)level_war = 0;
                        save_data("autosave");
                        save_data("last_defeat");
                        cout << "\nGlasfany >> screen translation to: " << scrine;
                        open_batlle_panel = 0;
                        Sleep(200);
                    }


                if(live>0)
                  if (Mouse::isButtonPressed(Mouse::Left))
                    if (button_atak.getGlobalBounds().contains(mouse_post.x, mouse_post.y)) {
                        live_m -= atak;
                        live -= atak_m;
                        window.draw(text_batl_a1);
                        if (bow == 1 && arrow >= 1) arrow--;
                        window.draw(text_batl_a2);
                        window.draw(text_batl_l2);

                        if (live <= 0) {
                            open_batlle_panel = 1;
                            live = 0;
                            plD.play();
                            window.draw(text_batl_l1);
                        }

                        if (live_m <= 0) {     
                            live_m = 0;
                            atak_m = 0;
                            for (int i = 0; i < 3; i++)door_[i] = 1;

                            if (monst == 1) {
                                ex += 50;
                                level_war++;
                                scrine = 9;
                                orkD.play();
                                if (cvest == 2)cv_progres++;
                            }
                            if (monst == 2) {
                                ex += 100;
                                level_war++;
                                scrine = 9;
                                troD.play();
                            }
                            if (monst == 3) {
                                ex += 250;
                                if (cvest == 3)cv_progres++;
                                level_war++;
                                scrine = 9;
                                gorD.play();
                            }
                            if (monst == 4) {
                                ex += 500;
                                level_war++;
                                scrine = 9;
                                if (cvest == 5)cv_progres++;
                                oboD.play();
                            }
                            if (monst == 5) {
                                ex += 800;
                                level_war++;
                                scrine = 9;
                                if (cvest == 7)cv_progres++;
                                if (random(1, 2) == 1)vedD.play(); else vedD2.play();
                            }
                            /*
                            music_2 = 0;
                            {
                                music.play();
                                for (int i = volume_m; i > 0; i--) {
                                    Sleep(3);
                                    music2.setVolume(i);
                                }
                                music.setVolume(0);
                                for (int i = 0; i < volume_m; i++) {
                                    Sleep(3);
                                    music.setVolume(i);
                                }
                                music2.pause();
                            }
                            */
                            for (int i = 0; i < 3; i++)door_[i] = 1;
                            for (int i = 0; i < 3; i++) door[i] = random(1, 3);
                            while ((door[0] == door[1]) || (door[0] == door[2]) || (door[1] == door[2])) for (int i = 0; i < 3; i++) door[i] = random(1, 3);
                            save_data("autosave");
                        }
                        else {
                            if (monst == 1) {
                                if (random(1, 2) == 1)ork1.play(); else ork2.play();
                            }
                            if (monst == 2) {
                                if (random(1, 2) == 1)ork1.play(); else tro1.play();
                            }
                            if (monst == 3) {
                                if (random(1, 2) == 1)ork1.play(); else gor1.play();
                            }
                            if (monst == 4) {
                                if (random(1, 2) == 1)obo1.play(); else obo2.play();
                            }
                            if (monst == 5) {
                                if (random(1, 2) == 1)ved1.play(); else ved2.play();
                            }
                        }


                        if (live > 0) {
                            if (monst == 1) {
                                live++;

                            }
                            if (monst == 2) {
                                if (armor == 1)live++;
                                if (armor == 2)live++;
                                if (armor == 3)live += 2;

                            }
                            if (monst == 3) {
                                if (armor == 1)live++;
                                if (armor == 2)live++;
                                if (armor == 3)live += 2;

                            }
                            if (monst == 4) {
                                if (armor == 1)live++;
                                if (armor == 2)live += 2;
                                if (armor == 3)live += 2;

                            }
                            if (monst == 5) {
                                if (armor == 1)live++;
                                if (armor == 2)live += 3;
                                if (armor == 3)live += 5;

                            }
                        }
                        
                        Sleep(1000);
                    }

                    if (live > 0) if (Keyboard::isKeyPressed(Keyboard::Space) || Keyboard::isKeyPressed(Keyboard::Enter)) {
                        live_m -= atak;
                        live -= atak_m;
                        window.draw(text_batl_a1);
                        if (bow == 1 && arrow >= 1) arrow--;
                        window.draw(text_batl_a2);
                        window.draw(text_batl_l2);

                        if (live <= 0) {
                            open_batlle_panel = 1;
                            live = 0;
                            plD.play();
                            window.draw(text_batl_l1);
                        }

                        if (live_m <= 0) {
                            live_m = 0;
                            atak_m = 0;
                            for (int i = 0; i < 3; i++)door_[i] = 1;

                            if (monst == 1) {
                                ex += 50;
                                level_war++;
                                scrine = 9;
                                orkD.play();
                                if (cvest == 2)cv_progres++;
                            }
                            if (monst == 2) {
                                ex += 100;
                                level_war++;
                                scrine = 9;
                                troD.play();
                            }
                            if (monst == 3) {
                                ex += 250;
                                if (cvest == 3)cv_progres++;
                                level_war++;
                                scrine = 9;
                                gorD.play();
                            }
                            if (monst == 4) {
                                ex += 500;
                                level_war++;
                                scrine = 9;
                                if (cvest == 5)cv_progres++;
                                oboD.play();
                            }
                            if (monst == 5) {
                                ex += 800;
                                level_war++;
                                scrine = 9;
                                if (cvest == 7)cv_progres++;
                                if (random(1, 2) == 1)vedD.play(); else vedD2.play();
                            }
                            for (int i = 0; i < 3; i++)door_[i] = 1;
                            for (int i = 0; i < 3; i++) door[i] = random(1, 3);
                            while ((door[0] == door[1]) || (door[0] == door[2]) || (door[1] == door[2])) for (int i = 0; i < 3; i++) door[i] = random(1, 3);
                            save_data("autosave");
                        }
                        else {
                            if (monst == 1) {
                                if (random(1, 2) == 1)ork1.play(); else ork2.play();
                            }
                            if (monst == 2) {
                                if (random(1, 2) == 1)ork1.play(); else tro1.play();
                            }
                            if (monst == 3) {
                                if (random(1, 2) == 1)ork1.play(); else gor1.play();
                            }
                            if (monst == 4) {
                                if (random(1, 2) == 1)obo1.play(); else obo2.play();
                            }
                            if (monst == 5) {
                                if (random(1, 2) == 1)ved1.play(); else ved2.play();
                            }
                        }


                        if (live > 0) {
                            if (monst == 1) {
                                live++;

                            }
                            if (monst == 2) {
                                if (armor == 1)live++;
                                if (armor == 2)live++;
                                if (armor == 3)live += 2;

                            }
                            if (monst == 3) {
                                if (armor == 1)live++;
                                if (armor == 2)live++;
                                if (armor == 3)live += 2;

                            }
                            if (monst == 4) {
                                if (armor == 1)live++;
                                if (armor == 2)live += 2;
                                if (armor == 3)live += 2;

                            }
                            if (monst == 5) {
                                if (armor == 1)live++;
                                if (armor == 2)live += 3;
                                if (armor == 3)live += 5;

                            }
                        }

                        Sleep(1000);
                    }

                    

                if (live <= 0) {
                    open_batlle_panel = 1;
                    live = 0;

                    window.draw(text_batl_l1);
                }
                
            {
                   stringstream ss;    ss << atak_m;
                   string text_o_;     ss >> text_o_;
                   text_batl_a2.setString(text_o_);
            }  

            {
                stringstream ss;    ss << live_m;
                string text_o_;     ss >> text_o_;
                text_batl_l2.setString(text_o_);
            }
            
            

                break;
            }

            if (Keyboard::isKeyPressed(Keyboard::Tilde)) if(consolE) console();
            if (Keyboard::isKeyPressed(Keyboard::Escape)) if (scrine == 1) {
                window.close(); save_data("autosave");
            }
            if (Keyboard::isKeyPressed(Keyboard::Home))scrine = 1;
            if (Keyboard::isKeyPressed(Keyboard::F7))save_data("autosave");
            if (Keyboard::isKeyPressed(Keyboard::F6)) {
                consolE = !consolE;
                cout<< "\nGlasfany >> console - "<< consolE;
            }

			
		}
		


		window.clear(Color::Black);
        switch (scrine)
        {
        case 0:
            window.draw(fon0);
		    window.draw(button_start);
            window.draw(text);

            break;
        case 1:
            window.draw(fon1);
            window.draw(button_main_map);
            window.draw(button_ivent);
            window.draw(button_save);                   
            window.draw(button_setings);
            window.draw(button_book_in);
            
            break;
        case 2:
            window.draw(fon);
            window.draw(button_back);

            window.draw(button_forest_in);
            window.draw(button_mine_in);
            window.draw(button_fog_in);

            if (level >= 4)bt_TM_in.setTexture(bt_tm_in_1);
            else bt_TM_in.setTexture(bt_tm_in_0);

            if (level >= 4) {
                but18.loadFromFile("gamedata/texture/buttons/castle/button_castle_in-1.png");
                button_cast_in.setTexture(but18);
                button_market_in.setTexture(but30);
            }
            else {
                but18.loadFromFile("gamedata/texture/buttons/castle/button_castle_in-2.png");
                button_cast_in.setTexture(but18);
                button_market_in.setTexture(but29);
            }
            window.draw(button_cast_in);
            window.draw(button_market_in);            
            window.draw(bt_TM_in);

            break;
        case 3:
        {
            window.draw(fon3);
            window.draw(button_back);

            if (level >= 100)text_inv_level.setPosition(1263, 55);
            else if (level < 10)text_inv_level.setPosition(1280, 55);
            else text_inv_level.setPosition(1271, 55);
            window.draw(text_inv_level);

            window.draw(text_inv_coal);
            window.draw(text_inv_gold);
            window.draw(text_inv_iron);
            window.draw(text_inv_diamond);
            window.draw(text_inv_silver);
            window.draw(text_inv_stal);
            window.draw(text_inv_wood);
            window.draw(text_inv_pickaxe);
            window.draw(text_inv_axe);
            window.draw(text_inv_zele_reg);
            window.draw(text_inv_zele_pow);
            window.draw(text_inv_arrow);
            window.draw(text_inv_chest_1);
            window.draw(text_inv_chest_2);
            window.draw(text_inv_chest_3);
            window.draw(text_inv_chest_4);
            item1.setScale(1, 1);
            if (armor == 0) { item1.setTexture(arm0); item1.setPosition(40, 50); }
            else if (armor == 1) { item1.setTexture(arm1); item1.setPosition(0, 50); }
            else if (armor == 2) { item1.setTexture(arm2); item1.setPosition(0, 50); }
            else if (armor == 3) { item1.setTexture(arm3); item1.setPosition(0, 50); }
            window.draw(item1);
            item2.setScale(1, 1);
            if (sword == 1) { item2.setTexture(swo1);  item2.setPosition(365, 40); }
            else if (sword == 2) { item2.setTexture(swo2);  item2.setPosition(365, 30); }
            else if (sword == 3) { item2.setTexture(swo3);  item2.setPosition(365, 30); }
            else if (sword == 4) { item2.setTexture(swo4);  item2.setPosition(365, 30); }
            else if (sword == 0) { item2.setTexture(swo0);  item2.setPosition(365, 30); }
            window.draw(item2);

            if (bow == 1)item3.setTexture(bow1);
            else if (bow == 0) item3.setTexture(bow0);
            item3.setPosition(365, 240);
            item3.setScale(1, 1);
            window.draw(item3);

            window.draw(button_inv_chest_1);
            window.draw(button_inv_chest_2);
            window.draw(button_inv_chest_3);
            window.draw(button_inv_chest_4);

            text_inv_chest_bt_1.setPosition(746, 680);
            window.draw(text_inv_chest_bt_1);
            text_inv_chest_bt_2.setPosition(576, 680);
            window.draw(text_inv_chest_bt_2);
            text_inv_chest_bt_3.setPosition(916, 680);
            window.draw(text_inv_chest_bt_3);
            text_inv_chest_bt_4.setPosition(1086, 680);
            window.draw(text_inv_chest_bt_4);
        }
        window.draw(liVE);
        window.draw(text_inv_live);
            break;
        case 4:
            window.draw(fon2);
            window.draw(button_back);
            window.draw(panel_mine);
            window.draw(button_mine_reboot);

            window.draw(text_mine_pickaxe);
            window.draw(text_mine_iron);
            window.draw(text_mine_coal);
            window.draw(text_mine_gold);
            window.draw(text_mine_diamond);

            //отрисовка кнопок
            {
                if (!st1.is_dig)btM_1.setTexture(ore_stone);      else  if (st1.res == 1)btM_1.setTexture(ore_coal);     else if (st1.res == 2)btM_1.setTexture(ore_iron);     else if (st1.res == 3)btM_1.setTexture(ore_gold);     else if (st1.res == 4)btM_1.setTexture(ore_diamond);       else if (st1.res == 0)btM_1.setTexture(ore_stone_);
                if (!st2.is_dig)btM_2.setTexture(ore_stone);      else  if (st2.res == 1)btM_2.setTexture(ore_coal);     else if (st2.res == 2)btM_2.setTexture(ore_iron);     else if (st2.res == 3)btM_2.setTexture(ore_gold);     else if (st2.res == 4)btM_2.setTexture(ore_diamond);       else if (st2.res == 0)btM_2.setTexture(ore_stone_);
                if (!st3.is_dig)btM_3.setTexture(ore_stone);      else  if (st3.res == 1)btM_3.setTexture(ore_coal);     else if (st3.res == 2)btM_3.setTexture(ore_iron);     else if (st3.res == 3)btM_3.setTexture(ore_gold);     else if (st3.res == 4)btM_3.setTexture(ore_diamond);       else if (st3.res == 0)btM_3.setTexture(ore_stone_);
                if (!st4.is_dig)btM_4.setTexture(ore_stone);      else  if (st4.res == 1)btM_4.setTexture(ore_coal);     else if (st4.res == 2)btM_4.setTexture(ore_iron);     else if (st4.res == 3)btM_4.setTexture(ore_gold);     else if (st4.res == 4)btM_4.setTexture(ore_diamond);       else if (st4.res == 0)btM_4.setTexture(ore_stone_);
                if (!st5.is_dig)btM_5.setTexture(ore_stone);      else  if (st5.res == 1)btM_5.setTexture(ore_coal);     else if (st5.res == 2)btM_5.setTexture(ore_iron);     else if (st5.res == 3)btM_5.setTexture(ore_gold);     else if (st5.res == 4)btM_5.setTexture(ore_diamond);       else if (st5.res == 0)btM_5.setTexture(ore_stone_);
                if (!st6.is_dig)btM_6.setTexture(ore_stone);      else  if (st6.res == 1)btM_6.setTexture(ore_coal);     else if (st6.res == 2)btM_6.setTexture(ore_iron);     else if (st6.res == 3)btM_6.setTexture(ore_gold);     else if (st6.res == 4)btM_6.setTexture(ore_diamond);       else if (st6.res == 0)btM_6.setTexture(ore_stone_);
                if (!st7.is_dig)btM_7.setTexture(ore_stone);      else  if (st7.res == 1)btM_7.setTexture(ore_coal);     else if (st7.res == 2)btM_7.setTexture(ore_iron);     else if (st7.res == 3)btM_7.setTexture(ore_gold);     else if (st7.res == 4)btM_7.setTexture(ore_diamond);       else if (st7.res == 0)btM_7.setTexture(ore_stone_);
                if (!st8.is_dig)btM_8.setTexture(ore_stone);      else  if (st8.res == 1)btM_8.setTexture(ore_coal);     else if (st8.res == 2)btM_8.setTexture(ore_iron);     else if (st8.res == 3)btM_8.setTexture(ore_gold);     else if (st8.res == 4)btM_8.setTexture(ore_diamond);       else if (st8.res == 0)btM_8.setTexture(ore_stone_);
                if (!st9.is_dig)btM_9.setTexture(ore_stone);      else  if (st9.res == 1)btM_9.setTexture(ore_coal);     else if (st9.res == 2)btM_9.setTexture(ore_iron);     else if (st9.res == 3)btM_9.setTexture(ore_gold);     else if (st9.res == 4)btM_9.setTexture(ore_diamond);       else if (st9.res == 0)btM_9.setTexture(ore_stone_);
                if (!st10.is_dig)btM_10.setTexture(ore_stone);    else  if (st10.res == 1)btM_10.setTexture(ore_coal);   else if (st10.res == 2)btM_10.setTexture(ore_iron);   else if (st10.res == 3)btM_10.setTexture(ore_gold);   else if (st10.res == 4)btM_10.setTexture(ore_diamond);     else if (st10.res == 0)btM_10.setTexture(ore_stone_);
                if (!st11.is_dig)btM_11.setTexture(ore_stone);    else  if (st11.res == 1)btM_11.setTexture(ore_coal);   else if (st11.res == 2)btM_11.setTexture(ore_iron);   else if (st11.res == 3)btM_11.setTexture(ore_gold);   else if (st11.res == 4)btM_11.setTexture(ore_diamond);     else if (st11.res == 0)btM_11.setTexture(ore_stone_);
                if (!st12.is_dig)btM_12.setTexture(ore_stone);    else  if (st12.res == 1)btM_12.setTexture(ore_coal);   else if (st12.res == 2)btM_12.setTexture(ore_iron);   else if (st12.res == 3)btM_12.setTexture(ore_gold);   else if (st12.res == 4)btM_12.setTexture(ore_diamond);     else if (st12.res == 0)btM_12.setTexture(ore_stone_);
                if (!st13.is_dig)btM_13.setTexture(ore_stone);    else  if (st13.res == 1)btM_13.setTexture(ore_coal);   else if (st13.res == 2)btM_13.setTexture(ore_iron);   else if (st13.res == 3)btM_13.setTexture(ore_gold);   else if (st13.res == 4)btM_13.setTexture(ore_diamond);     else if (st13.res == 0)btM_13.setTexture(ore_stone_);
                if (!st14.is_dig)btM_14.setTexture(ore_stone);    else  if (st14.res == 1)btM_14.setTexture(ore_coal);   else if (st14.res == 2)btM_14.setTexture(ore_iron);   else if (st14.res == 3)btM_14.setTexture(ore_gold);   else if (st14.res == 4)btM_14.setTexture(ore_diamond);     else if (st14.res == 0)btM_14.setTexture(ore_stone_);
                if (!st15.is_dig)btM_15.setTexture(ore_stone);    else  if (st15.res == 1)btM_15.setTexture(ore_coal);   else if (st15.res == 2)btM_15.setTexture(ore_iron);   else if (st15.res == 3)btM_15.setTexture(ore_gold);   else if (st15.res == 4)btM_15.setTexture(ore_diamond);     else if (st15.res == 0)btM_15.setTexture(ore_stone_);
                if (!st16.is_dig)btM_16.setTexture(ore_stone);    else  if (st16.res == 1)btM_16.setTexture(ore_coal);   else if (st16.res == 2)btM_16.setTexture(ore_iron);   else if (st16.res == 3)btM_16.setTexture(ore_gold);   else if (st16.res == 4)btM_16.setTexture(ore_diamond);     else if (st16.res == 0)btM_16.setTexture(ore_stone_);
                if (!st17.is_dig)btM_17.setTexture(ore_stone);    else  if (st17.res == 1)btM_17.setTexture(ore_coal);   else if (st17.res == 2)btM_17.setTexture(ore_iron);   else if (st17.res == 3)btM_17.setTexture(ore_gold);   else if (st17.res == 4)btM_17.setTexture(ore_diamond);     else if (st17.res == 0)btM_17.setTexture(ore_stone_);
                if (!st18.is_dig)btM_18.setTexture(ore_stone);    else  if (st18.res == 1)btM_18.setTexture(ore_coal);   else if (st18.res == 2)btM_18.setTexture(ore_iron);   else if (st18.res == 3)btM_18.setTexture(ore_gold);   else if (st18.res == 4)btM_18.setTexture(ore_diamond);     else if (st18.res == 0)btM_18.setTexture(ore_stone_);
                if (!st19.is_dig)btM_19.setTexture(ore_stone);    else  if (st19.res == 1)btM_19.setTexture(ore_coal);   else if (st19.res == 2)btM_19.setTexture(ore_iron);   else if (st19.res == 3)btM_19.setTexture(ore_gold);   else if (st19.res == 4)btM_19.setTexture(ore_diamond);     else if (st19.res == 0)btM_19.setTexture(ore_stone_);
                if (!st20.is_dig)btM_20.setTexture(ore_stone);    else  if (st20.res == 1)btM_20.setTexture(ore_coal);   else if (st20.res == 2)btM_20.setTexture(ore_iron);   else if (st20.res == 3)btM_20.setTexture(ore_gold);   else if (st20.res == 4)btM_20.setTexture(ore_diamond);     else if (st20.res == 0)btM_20.setTexture(ore_stone_);
                if (!st21.is_dig)btM_21.setTexture(ore_stone);    else  if (st21.res == 1)btM_21.setTexture(ore_coal);   else if (st21.res == 2)btM_21.setTexture(ore_iron);   else if (st21.res == 3)btM_21.setTexture(ore_gold);   else if (st21.res == 4)btM_21.setTexture(ore_diamond);     else if (st21.res == 0)btM_21.setTexture(ore_stone_);
                if (!st22.is_dig)btM_22.setTexture(ore_stone);    else  if (st22.res == 1)btM_22.setTexture(ore_coal);   else if (st22.res == 2)btM_22.setTexture(ore_iron);   else if (st22.res == 3)btM_22.setTexture(ore_gold);   else if (st22.res == 4)btM_22.setTexture(ore_diamond);     else if (st22.res == 0)btM_22.setTexture(ore_stone_);
                if (!st23.is_dig)btM_23.setTexture(ore_stone);    else  if (st23.res == 1)btM_23.setTexture(ore_coal);   else if (st23.res == 2)btM_23.setTexture(ore_iron);   else if (st23.res == 3)btM_23.setTexture(ore_gold);   else if (st23.res == 4)btM_23.setTexture(ore_diamond);     else if (st23.res == 0)btM_23.setTexture(ore_stone_);
                if (!st24.is_dig)btM_24.setTexture(ore_stone);    else  if (st24.res == 1)btM_24.setTexture(ore_coal);   else if (st24.res == 2)btM_24.setTexture(ore_iron);   else if (st24.res == 3)btM_24.setTexture(ore_gold);   else if (st24.res == 4)btM_24.setTexture(ore_diamond);     else if (st24.res == 0)btM_24.setTexture(ore_stone_);
                if (!st25.is_dig)btM_25.setTexture(ore_stone);    else  if (st25.res == 1)btM_25.setTexture(ore_coal);   else if (st25.res == 2)btM_25.setTexture(ore_iron);   else if (st25.res == 3)btM_25.setTexture(ore_gold);   else if (st25.res == 4)btM_25.setTexture(ore_diamond);     else if (st25.res == 0)btM_25.setTexture(ore_stone_);
                if (!st26.is_dig)btM_26.setTexture(ore_stone);    else  if (st26.res == 1)btM_26.setTexture(ore_coal);   else if (st26.res == 2)btM_26.setTexture(ore_iron);   else if (st26.res == 3)btM_26.setTexture(ore_gold);   else if (st26.res == 4)btM_26.setTexture(ore_diamond);     else if (st26.res == 0)btM_26.setTexture(ore_stone_);
                if (!st27.is_dig)btM_27.setTexture(ore_stone);    else  if (st27.res == 1)btM_27.setTexture(ore_coal);   else if (st27.res == 2)btM_27.setTexture(ore_iron);   else if (st27.res == 3)btM_27.setTexture(ore_gold);   else if (st27.res == 4)btM_27.setTexture(ore_diamond);     else if (st27.res == 0)btM_27.setTexture(ore_stone_);
                if (!st28.is_dig)btM_28.setTexture(ore_stone);    else  if (st28.res == 1)btM_28.setTexture(ore_coal);   else if (st28.res == 2)btM_28.setTexture(ore_iron);   else if (st28.res == 3)btM_28.setTexture(ore_gold);   else if (st28.res == 4)btM_28.setTexture(ore_diamond);     else if (st28.res == 0)btM_28.setTexture(ore_stone_);
                if (!st29.is_dig)btM_29.setTexture(ore_stone);    else  if (st29.res == 1)btM_29.setTexture(ore_coal);   else if (st29.res == 2)btM_29.setTexture(ore_iron);   else if (st29.res == 3)btM_29.setTexture(ore_gold);   else if (st29.res == 4)btM_29.setTexture(ore_diamond);     else if (st29.res == 0)btM_29.setTexture(ore_stone_);
                if (!st30.is_dig)btM_30.setTexture(ore_stone);    else  if (st30.res == 1)btM_30.setTexture(ore_coal);   else if (st30.res == 2)btM_30.setTexture(ore_iron);   else if (st30.res == 3)btM_30.setTexture(ore_gold);   else if (st30.res == 4)btM_30.setTexture(ore_diamond);     else if (st30.res == 0)btM_30.setTexture(ore_stone_);
                if (!st31.is_dig)btM_31.setTexture(ore_stone);    else  if (st31.res == 1)btM_31.setTexture(ore_coal);   else if (st31.res == 2)btM_31.setTexture(ore_iron);   else if (st31.res == 3)btM_31.setTexture(ore_gold);   else if (st31.res == 4)btM_31.setTexture(ore_diamond);     else if (st31.res == 0)btM_31.setTexture(ore_stone_);
                if (!st32.is_dig)btM_32.setTexture(ore_stone);    else  if (st32.res == 1)btM_32.setTexture(ore_coal);   else if (st32.res == 2)btM_32.setTexture(ore_iron);   else if (st32.res == 3)btM_32.setTexture(ore_gold);   else if (st32.res == 4)btM_32.setTexture(ore_diamond);     else if (st32.res == 0)btM_32.setTexture(ore_stone_);
                if (!st33.is_dig)btM_33.setTexture(ore_stone);    else  if (st33.res == 1)btM_33.setTexture(ore_coal);   else if (st33.res == 2)btM_33.setTexture(ore_iron);   else if (st33.res == 3)btM_33.setTexture(ore_gold);   else if (st33.res == 4)btM_33.setTexture(ore_diamond);     else if (st33.res == 0)btM_33.setTexture(ore_stone_);
                if (!st34.is_dig)btM_34.setTexture(ore_stone);    else  if (st34.res == 1)btM_34.setTexture(ore_coal);   else if (st34.res == 2)btM_34.setTexture(ore_iron);   else if (st34.res == 3)btM_34.setTexture(ore_gold);   else if (st34.res == 4)btM_34.setTexture(ore_diamond);     else if (st34.res == 0)btM_34.setTexture(ore_stone_);
                if (!st35.is_dig)btM_35.setTexture(ore_stone);    else  if (st35.res == 1)btM_35.setTexture(ore_coal);   else if (st35.res == 2)btM_35.setTexture(ore_iron);   else if (st35.res == 3)btM_35.setTexture(ore_gold);   else if (st35.res == 4)btM_35.setTexture(ore_diamond);     else if (st35.res == 0)btM_35.setTexture(ore_stone_);
           
                window.draw(btM_1); window.draw(btM_2); window.draw(btM_3); window.draw(btM_4); window.draw(btM_5); window.draw(btM_6); window.draw(btM_7);
                window.draw(btM_8); window.draw(btM_9); window.draw(btM_10); window.draw(btM_11); window.draw(btM_12); window.draw(btM_13); window.draw(btM_14);
                window.draw(btM_15); window.draw(btM_16); window.draw(btM_17); window.draw(btM_18); window.draw(btM_19); window.draw(btM_20); window.draw(btM_21);
                window.draw(btM_22); window.draw(btM_23); window.draw(btM_24); window.draw(btM_25); window.draw(btM_26); window.draw(btM_27); window.draw(btM_28);
                window.draw(btM_29); window.draw(btM_30); window.draw(btM_31); window.draw(btM_32); window.draw(btM_33); window.draw(btM_34); window.draw(btM_35);
            }
           


            break;
        case 5:


            break;
        case 6:
            window.draw(fon6);
            window.draw(button_back);

            window.draw(bt_fog_1);
            window.draw(bt_fog_2);
            window.draw(bt_fog_3);
            window.draw(bt_fog_4);
            window.draw(bt_fog_5);
            window.draw(bt_fog_6);

            window.draw(text_fog_coal);
            window.draw(text_fog_iron);
            window.draw(text_fog_wood);
            window.draw(text_fog_silver);
            window.draw(text_fog_stal);
            break;
        case 7:


            break;
        case 8:
            window.draw(fon8);
            window.draw(button_back);
            window.draw(Bt_TM1);
            window.draw(Bt_TM2);
            window.draw(Bt_TM3);
            window.draw(text_z1);
            window.draw(text_z2);
            window.draw(text_z3);
            window.draw(text_diamond_y);

            break;
        case 9:
            window.draw(fon9);
            window.draw(button_back);
            window.draw(text_cast_level_war);

            if (door_[0] == 0)door1.setTexture(dor0); else door1.setTexture(dor1);
            if (door_[1] == 0)door2.setTexture(dor0); else door2.setTexture(dor1);
            if (door_[2] == 0)door3.setTexture(dor0); else door3.setTexture(dor1);
            window.draw(door1);
            window.draw(door2);
            window.draw(door3);

            if (open_castle_panel) {
                window.draw(castle_panel);
                castle_panel.setPosition(450, 200);
            }
            else castle_panel.setPosition(4500, 2000);

            
            break;
        case 10:           
            window.draw(fon10);
            window.draw(button_back);
            window.draw(button_market_res);
            if (market == 1)Bt_m1.setTexture(bt_m1);
            else if (market == 2)Bt_m1.setTexture(bt_m2);
            else if (market == 3)Bt_m1.setTexture(bt_m3);
            else if (market == 4)Bt_m1.setTexture(bt_m4);
            else if (market == 5)Bt_m1.setTexture(bt_m5);
            else if (market == 6)Bt_m1.setTexture(bt_m6);
            else if (market == 7)Bt_m1.setTexture(bt_m7);
            else if (market == 8)Bt_m1.setTexture(bt_m8);
            else if (market == 9)Bt_m1.setTexture(bt_m9);
            else if (market == 10)Bt_m1.setTexture(bt_m10);
            else if (market == 11)Bt_m1.setTexture(bt_m11);
            else if (market == 12)Bt_m1.setTexture(bt_m12);
            else if (market == 13)Bt_m1.setTexture(bt_m13);
            else if (market == 14)Bt_m1.setTexture(bt_m14);
            else if (market == 15)Bt_m1.setTexture(bt_m15);
            else if (market == 16)Bt_m1.setTexture(bt_m16);
            else if (market == 17)Bt_m1.setTexture(bt_m17);
            else if (market == 18)Bt_m1.setTexture(bt_m18);
            else if (market == 19)Bt_m1.setTexture(bt_m19);
            else if (market == 20)Bt_m1.setTexture(bt_m20);
            else if (market == 21)Bt_m1.setTexture(bt_m21);
            else if (market == 22)Bt_m1.setTexture(bt_m22);
            else if (market == 23)Bt_m1.setTexture(bt_m23);
            else if (market == 24)Bt_m1.setTexture(bt_m24);
            else if (market == 25)Bt_m1.setTexture(bt_m25);
            else if (market == 26)Bt_m1.setTexture(bt_m26);
            else if (market == 27)Bt_m1.setTexture(bt_m27);

            window.draw(Bt_m1);
            MR_ch1.setPosition(300, 430);
            MR_ch1.setScale(1.5, 1.5);
            MR_ch2.setPosition(600, 450);
            MR_ch2.setScale(1.5, 1.5);
            MR_ch3.setPosition(900, 450);
            MR_ch3.setScale(1.5, 1.5);
            window.draw(MR_ch1);
            window.draw(MR_ch2);
            window.draw(MR_ch3);
            window.draw(text_mar_chest_2);
            window.draw(text_mar_chest_3);
            window.draw(text_mar_chest_4);

            break;
        case 11:
            
            window.draw(fon11);
            window.draw(button_minus);
            window.draw(button_plus);
            window.draw(button_minus_);
            window.draw(button_plus_);
            
            window.draw(text_set_);
            window.draw(text_set_1);
            window.draw(text_set_1_1);
            window.draw(text_set_2);
            window.draw(text_set_2_1);
            window.draw(button_back);
            window.draw(bt_ci);
            break;
        case 12:
            window.draw(fon12);
            window.draw(button_back);

            window.draw(text_for_axe);
            window.draw(text_for_wood);

            if (forest_res[0] == 0)btF_1.setTexture(forest_0);  else if (forest_res[0] == 1)btF_1.setTexture(forest_1); else if (forest_res[0] == 2)btF_1.setTexture(forest_2); else if (forest_res[0] == 3)btF_1.setTexture(forest_3);
            if (forest_res[1] == 0)btF_2.setTexture(forest_0);  else if (forest_res[1] == 1)btF_2.setTexture(forest_1); else if (forest_res[1] == 2)btF_2.setTexture(forest_2); else if (forest_res[1] == 3)btF_2.setTexture(forest_3);
            if (forest_res[2] == 0)btF_3.setTexture(forest_0);  else if (forest_res[2] == 1)btF_3.setTexture(forest_1); else if (forest_res[2] == 2)btF_3.setTexture(forest_2); else if (forest_res[2] == 3)btF_3.setTexture(forest_3);
            window.draw(btF_1);
            window.draw(btF_2);
            window.draw(btF_3);
            window.draw(button_forest_reboot);
            break;
        case 13:
            if (!start_Play) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                bt_mine.setPosition(10000, 10000);
                text_b_t.setPosition(7650, 3400);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial/text_1.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    helper.setTexture(HElper_4);
                    string nh = load_text("dial/text_2.txt");
                    text_t_.setString(nh);

                }
                else if (dial_start == 2) {
                    helper.setTexture(HElper_4);
                    string nh = load_text("dial/text_3.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 3) {
                    helper.setTexture(HElper_4);
                    string nh = load_text("dial/text_4.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 4) {
                    helper.setTexture(HElper_1);
                    string nh = load_text("dial/text_5.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 5) {
                    helper.setTexture(HElper_1);
                    string nh = load_text("dial/text_6.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 6) {
                    helper.setTexture(HElper_1);
                    string nh = load_text("dial/text_7.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 7) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("dial/text_8.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 8) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial/text_9.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 9) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("text_2.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 10) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial/text_10.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 11) {
                    helper.setTexture(HElper_1);
                    string nh = load_text("text_3.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 12) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial/text_11.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 13) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("text_7.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 14) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial/text_12.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 15) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("text_5.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 16) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial/text_13.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 17) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("text_4.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 18) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial/text_14.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 19) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("text_6.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 20) {
                    helper.setTexture(HElper_1);
                    string nh = load_text("dial/text_15.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 21) {
                    helper.setTexture(HElper_1);
                    start_Play = 1;
                    scrine = 13;
                    cout << "\nGlasfany >> screen translation to: " << scrine;
                }

            }
            else if (open_1LE) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial2/text_1.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_1LE = 0;
                    helper.setTexture(HElper_2);
                }
            }
            else if (open_task_panel) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("task/f/text_1.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_task_panel = 0;
                    helper.setTexture(HElper_2);
                    string nh = load_text("task/p/text_2.txt");
                    stringstream ss;    ss << cv_progres;
                    string text_o_;     ss >> text_o_;
                    nh = load_text("task/p/text_2.txt") + " " + text_o_ + "/15";
                    text_t_.setString(nh);
                }
            }
            else if (open_task2_panel) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("task/f/text_2.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_task2_panel = 0;
                    helper.setTexture(HElper_2);
                    string nh = load_text("task/p/text_3.txt");
                    stringstream ss;    ss << cv_progres;
                    string text_o_;     ss >> text_o_;
                    nh = load_text("task/p/text_3.txt") + " " + text_o_ + "/25";
                    text_t_.setString(nh);
                }
            }
            else if (open_task3_panel) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("task/f/text_3.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_task3_panel = 0;
                    helper.setTexture(HElper_2);
                    string nh = load_text("task/p/text_4.txt");
                    stringstream ss;    ss << diamond;
                    string text_o_;     ss >> text_o_;
                    nh = load_text("task/p/text_4.txt") + " " + text_o_ + "/200";
                    text_t_.setString(nh);

                }
            }
            else if (open_task4_panel) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("task/f/text_4.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_task4_panel = 0;
                    helper.setTexture(HElper_2);
                    string nh = load_text("task/p/text_5.txt");
                    stringstream ss;    ss << cv_progres;
                    string text_o_;     ss >> text_o_;
                    nh = load_text("task/p/text_5.txt") + " " + text_o_ + "/17";
                    text_t_.setString(nh);
                }
            }
            else if (open_task5_panel) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("task/f/text_5.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_task5_panel = 0;
                    helper.setTexture(HElper_2);
                    string nh = load_text("task/p/text_6.txt");
                    stringstream ss;    ss << coal;
                    string text_o_;     ss >> text_o_;
                    nh = load_text("task/p/text_6.txt") + " " + text_o_ + "/1500";
                    text_t_.setString(nh);
                }
            }
            else if (open_task6_panel) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("task/f/text_6.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_task6_panel = 0;
                    helper.setTexture(HElper_2);
                    string nh = load_text("task/p/text_7.txt");
                    stringstream ss;    ss << cv_progres;
                    string text_o_;     ss >> text_o_;
                    nh = load_text("task/p/text_7.txt") + " " + text_o_ + "/5";
                    text_t_.setString(nh);
                }
            }
            else if (open_task7_panel) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("task/f/text_7.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_task7_panel = 0;
                    helper.setTexture(HElper_2);
                    string nh = load_text("task/p/text_8.txt");
                    stringstream ss;    ss << gold;
                    string text_o_;     ss >> text_o_;
                    nh = load_text("task/p/text_8.txt") + " " + text_o_ + "/1000";
                    text_t_.setString(nh);
                }
            }
            else if (open_task8_panel) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                text_b_t.setPosition(7650, 3400);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_3);
                    string nh = load_text("task/f/text_8.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_task8_panel = 0;
                    helper.setTexture(HElper_1);
                    string nh = load_text("task/p/text_9.txt");
                    text_t_.setString(nh);
                }
            }
            else if (finish) {
            helper.setPosition(800, 200);
            bt_task.setPosition(7500, 20000);
            text_b_t.setPosition(7650, 3400);
            bt_mine.setPosition(10000, 10000);
            bt_castle.setPosition(10000, 10000);
            bt_market.setPosition(10000, 10000);
            bt_help.setPosition(10000, 10000);
            bt_forest.setPosition(10000, 10000);
            bt_forges.setPosition(10000, 10000);
            bt_towerM.setPosition(10000, 10000);
            button_back.setPosition(11300, 7035);
            if (dial_start == 0) {
                helper.setTexture(HElper_3);
                string nh = load_text("f/text_1.txt");
                text_t_.setString(nh);
            }
            else if (dial_start == 1) {
                helper.setTexture(HElper_2);
                string nh = load_text("f/text_2.txt");
                text_t_.setString(nh);              
            }
            else if (dial_start == 2) {
                helper.setTexture(HElper_2);
                string nh = load_text("f/text_2.txt");
                text_t_.setString(nh);
                remove("gamedata//saves//task 1 completed.data");
                remove("gamedata//saves//task 2 completed.data");
                remove("gamedata//saves//task 3 completed.data");
                remove("gamedata//saves//task 4 completed.data");
                remove("gamedata//saves//task 5 completed.data");
                remove("gamedata//saves//task 6 completed.data");
                remove("gamedata//saves//task 7 completed.data");
                remove("gamedata//saves//task 8 completed.data"); 
                remove("gamedata//saves//last_defeat.data");
                finish = 0;
                save_data_all();
                window.close();
            }
            }
            else if (open_4LE) {
                helper.setPosition(800, 200);
                bt_task.setPosition(7500, 20000);
                bt_mine.setPosition(10000, 10000);
                text_b_t.setPosition(7650, 3400);
                bt_castle.setPosition(10000, 10000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_4);
                    string nh = load_text("dial2/text_2.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_4LE = 0;
                    helper.setTexture(HElper_4);
                    scrine = 2;
                    button_back.setPosition(1130, 735);
                }
            }
            else if (open_100LE) {
                helper.setPosition(800, 200);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                text_b_t.setPosition(7650, 3400);
                bt_task.setPosition(7500, 20000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial2/text_3.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_100LE = 0;
                    helper.setTexture(HElper_1);
                }
            }
            else if (open_1000LE) {
                helper.setPosition(800, 200);
                bt_mine.setPosition(10000, 10000);
                bt_castle.setPosition(10000, 10000);
                text_b_t.setPosition(7650, 3400);
                bt_task.setPosition(7500, 20000);
                bt_market.setPosition(10000, 10000);
                bt_help.setPosition(10000, 10000);
                bt_forest.setPosition(10000, 10000);
                bt_forges.setPosition(10000, 10000);
                bt_towerM.setPosition(10000, 10000);
                button_back.setPosition(11300, 7035);
                if (dial_start == 0) {
                    helper.setTexture(HElper_2);
                    string nh = load_text("dial2/text_4.txt");
                    text_t_.setString(nh);
                }
                else if (dial_start == 1) {
                    open_1000LE = 0;
                    helper.setTexture(HElper_1);
                }
            }
            else {
                helper.setPosition(10000, 10000);
                bt_help.setPosition(750, 120);
                bt_mine.setPosition(900, 120);
                bt_towerM.setPosition(970, 120);
                bt_forest.setPosition(900, 185);
                bt_forges.setPosition(970, 185);
                bt_castle.setPosition(1040, 120);
                bt_market.setPosition(1040, 185);
                button_back.setPosition(1130, 735);
                if (cvest > 8) {
                    bt_task.setPosition(7500, 20000);
                    text_b_t.setPosition(7650, 3400);
                }
                else {
                    bt_task.setPosition(750, 330);
                    text_b_t.setPosition(765, 340);
                }
            }

            window.draw(fon13);
            window.draw(button_back);
            window.draw(text_t_);

            window.draw(bt_task);
            window.draw(text_b_t);
            window.draw(bt_mine);
            window.draw(bt_help);
            window.draw(bt_forges);
            window.draw(bt_market);
            window.draw(bt_forest);
            window.draw(bt_castle);
            window.draw(bt_towerM);           

            window.draw(helper);



            break;
        case 14:
            window.draw(fon14);
            window.draw(text_batl_a1);
            window.draw(text_batl_l1);
            window.draw(text_batl_a2);
            window.draw(text_batl_l2);

            window.draw(monster);
            window.draw(button_atak);
            window.draw(text_batlle);

            item1.setScale(0.9,0.9);
            if (armor == 0)      { item1.setTexture(arm0); item1.setPosition(0, 250); }
            else if (armor == 1) { item1.setTexture(arm1); item1.setPosition(0, 250); }
            else if (armor == 2) { item1.setTexture(arm2); item1.setPosition(0, 250); }
            else if (armor == 3) { item1.setTexture(arm3); item1.setPosition(0, 250); }
            window.draw(item1);

            item2.setScale(0.8, 0.8);
            if (sword == 1) { item2.setTexture(swo1);  item2.setPosition(200, 10); }
            else if (sword == 2) { item2.setTexture(swo2);  item2.setPosition(200, 10); }
            else if (sword == 3) { item2.setTexture(swo3);  item2.setPosition(200, 10); }
            else if (sword == 4) { item2.setTexture(swo4);  item2.setPosition(200, 10); }
            window.draw(item2);

            if (bow == 1) {
                item3.setTexture(bow1);
                item3.setScale(0.8, 0.8);
                item3.setPosition(140, -150);
                window.draw(item3);
            }

            if (open_batlle_panel) {
                panel_bt.setPosition(315, 200);
                window.draw(panel_bt);

                text_bal_pan.setPosition(360, 250);
                window.draw(text_bal_pan);
               
            }
            else panel_bt.setPosition(5500, 7000);

            break;
        }

        if(colib)window.draw(t_colib);
		window.display();

      

        //volume
        {
            if (music_2) {
                music.setVolume(0);
                music2.setVolume(volume_m);
            }
            else {
                music.setVolume(volume_m);
                music2.setVolume(0);
            }
            start_sound.setVolume(volume_s);
            click.setVolume(volume_s);
            door_s.setVolume(volume_s);

            list.setVolume(volume_s);
            ef1.setVolume(volume_s);
            ef2.setVolume(volume_s);
            ef3.setVolume(volume_s);
            GaOv.setVolume(volume_s);
            gor1.setVolume(volume_s);
            gorD.setVolume(volume_s);
            obo1.setVolume(volume_s);
            obo2.setVolume(volume_s);
            oboD.setVolume(volume_s);
            ork1.setVolume(volume_s);
            ork2.setVolume(volume_s);
            orkD.setVolume(volume_s);
            plD.setVolume(volume_s);
            tro1.setVolume(volume_s);
            troD.setVolume(volume_s);
            ved1.setVolume(volume_s);
            ved2.setVolume(volume_s);
            vedD.setVolume(volume_s);
            vedD2.setVolume(volume_s);
            man_1.setVolume(volume_s);
            man_2.setVolume(volume_s);
            hello.setVolume(volume_s);

        }
	}

    cout << "\nGlasfany >> closing the program\n\n";
	return 0;
}





bool loading_data_ReadFile() {
    const string adres = "gamedata\\saves\\autosave.data";

    if (!loading_config_setings_ReadFile())return 0;

    ifstream Data;



    Data.open(adres);
    cout << "\nGlasfany >> attempt to open a save file";
    if (!Data.is_open()) {
        Data.close();
cout << "\n\nERROR!   failure to open the save file 'autosave' further operation of the program is impossible!\n";
        return 0;
        
    }
    else {
        Data.close();

        string n = " ";
        float nom;

        for (Data.open(adres); !Data.eof();) {
            getline(Data, n);
            stringstream ss,ss1;

            if (n == "<is-start-game>") {
                getline(Data, n);
                ss << n;
                ss >> start_Play;
            }
            if (n == "<is-dialog-game>") {
                getline(Data, n);
                ss << n;
                ss >> isDialog;
            }
            if (n == "<level>") {
                getline(Data, n);
                ss << n;
                ss >> level;
            }
            //ресурсы
            if (n == "<silver_ore>") {
                getline(Data, n);
                ss << n;
                ss >> silver;
            }
            if (n == "<coal_ore>") {
                getline(Data, n);
                ss << n;
                ss >> coal;
            }
            if (n == "<iron_ore>") {
                getline(Data, n);
                ss << n;
                ss >> iron;
            }
            if (n == "<gold_ore>") {
                getline(Data, n);
                ss << n;
                ss >> gold;
            }
            if (n == "<diamond_ore>") {
                getline(Data, n);
                ss << n;
                ss >> diamond;
            }
            if (n == "<wood_i>") {
                getline(Data, n);
                ss << n;
                ss >> wood;
            }
            if (n == "<pickaxe_i>") {
                getline(Data, n);
                ss << n;
                ss >> pickaxe;
            }
            if (n == "<stal_i>") {
                getline(Data, n);
                ss << n;
                ss >> stal;
            }
            if (n == "<sword_i>") {
                getline(Data, n);
                ss << n;
                ss >> sword;
            }
            if (n == "<armor_i>") {
                getline(Data, n);
                ss << n;
                ss >> armor;
            }
            if (n == "<ex_i>") {
                getline(Data, n);
                ss << n;
                ss >> ex;
            }
            if (n == "<zele_reg_i>") {
                getline(Data, n);
                ss << n;
                ss >> zele_reg;
            }
            if (n == "<axe_i>") {
                getline(Data, n);
                ss << n;
                ss >> axe;
            }
            if (n == "<bow_i>") {
                getline(Data, n);
                ss << n;
                ss >> bow;
            }
            if (n == "<arrow_i>") {
                getline(Data, n);
                ss << n;
                ss >> arrow;
            }
            if (n == "<chest_i_1>") {
                getline(Data, n);
                ss << n;
                ss >> chest_1;
            }
            if (n == "<chest_i_2>") {
                getline(Data, n);
                ss << n;
                ss >> chest_2;
            }
            if (n == "<chest_i_3>") {
                getline(Data, n);
                ss << n;
                ss >> chest_3;
            }
            if (n == "<chest_i_4>") {
                getline(Data, n);
                ss << n;
                ss >> chest_4;
            }
            if (n == "<zele_pow_i>") {
                getline(Data, n);
                ss << n;
                ss >> zele_pow;
            }
            if (n == "<live>") {
                getline(Data, n);
                ss << n;
                ss >> live;
            }
            if (n == "<atak_zel>") {
                getline(Data, n);
                ss << n;
                ss >> atak_zel;
            }
            if (n == "<level_war>") {
                getline(Data, n);
                ss << n;
                ss >> level_war;
            }
            if (n == "<door_1>") {
                getline(Data, n);
                ss << n;
                ss >> door[0];
            }
            if (n == "<door_1_>") {
                getline(Data, n);
                ss << n;
                ss >> door_[0];
            }
            if (n == "<door_2>") {
                getline(Data, n);
                ss << n;
                ss >> door[1];
            }
            if (n == "<door_2_>") {
                getline(Data, n);
                ss << n;
                ss >> door_[1];
            }
            if (n == "<door_3>") {
                getline(Data, n);
                ss << n;
                ss >> door[2];
            }
            if (n == "<door_3_>") {
                getline(Data, n);
                ss << n;
                ss >> door_[2];
            }
            if (n == "<cv_>") {
                getline(Data, n);
                ss << n;
                ss >> cvest;
            }
            if (n == "<cv_p>") {
                getline(Data, n);
                ss << n;
                ss >> cv_progres;
            }

  
            
            st1.is_dig = 0; st2.is_dig = 0; st3.is_dig = 0; st4.is_dig = 0; st5.is_dig = 0; st6.is_dig = 0; st7.is_dig = 0;
            st8.is_dig = 0; st9.is_dig = 0; st10.is_dig = 0; st11.is_dig = 0; st12.is_dig = 0; st13.is_dig = 0; st14.is_dig = 0;
            st15.is_dig = 0; st16.is_dig = 0; st17.is_dig = 0; st18.is_dig = 0; st19.is_dig = 0; st20.is_dig = 0; st21.is_dig = 0;
            st22.is_dig = 0; st23.is_dig = 0; st24.is_dig = 0; st25.is_dig = 0; st26.is_dig = 0; st27.is_dig = 0; st28.is_dig = 0;
            st29.is_dig = 0; st30.is_dig = 0; st31.is_dig = 0; st32.is_dig = 0; st33.is_dig = 0; st34.is_dig = 0; st35.is_dig = 0;
            for (int i = 0; i < 35; i++) mine_ore_R[i] = 0;
            for (int i = 0; i < 35; i++) if (random(1, 3) == 1) mine_ore_R[i] = 1;
            for (int i = 0; i < 35; i++) if (random(1, 5) == 1) mine_ore_R[i] = 2;
            for (int i = 0; i < 35; i++) if (random(1, 8) == 1) mine_ore_R[i] = 3;
            for (int i = 0; i < 35; i++) if (random(1, 17) == 1)mine_ore_R[i] = 4;
            


        }
        Data.close();
        


        cout << "\nGlasfany >> successful reading of the save file";
        return 1;
    }
}

void console() {
    string command_in;
    cout << "\nConsole << ";
    cin >> command_in;

    if (consolE){
        if (command_in == "get_scrine") {
            cout << "Console >> " << scrine;
        }
        else if (command_in == "set_scrine") {
            cout << "Console << ";
            int n; cin >> n; scrine = n;
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "system(cls)") {
            system("cls");
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "set_pickaxe") {
            cout << "Console << ";
            int n; cin >> n; pickaxe = n;
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "get_coal") {
            cout << "Console >> " << coal;
        }
        else if (command_in == "set_coal") {
            cout << "Console << ";
            int n; cin >> n; coal = n;
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "get_pickaxe") {
            cout << "Console >> " << pickaxe;
        }
        else if (command_in == "set_iron") {
            cout << "Console << ";
            int n; cin >> n; iron = n;
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "get_iron") {
            cout << "Console >> " << iron;
        }
        else if (command_in == "set_gold") {
            cout << "Console << ";
            int n; cin >> n; gold = n;
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "get_level") {
            cout << "Console >> " << level;
        }
        else if (command_in == "set_level") {
            cout << "Console << ";
            int n; cin >> n; level = n;
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "get_gold") {
            cout << "Console >> " << gold;
        }
        else if (command_in == "set_diamond") {
            cout << "Console << ";
            int n; cin >> n; diamond = n;
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "get_diamond") {
            cout << "Console >> " << diamond;
        }
        else if (command_in == "set_progres") {
            cout << "Console << ";
            int n; cin >> n; cv_progres = n;
            cout << "Glasfany >> action completed";
        }
        else if (command_in == "get_progres") {
            cout << "Console >> " << cv_progres;
        }
        else if (command_in == "full_war") {
            bow = 1; sword = 4; armor = 3; arrow = 999999;
            cout << "Console >> action completed";
        }
        else if (command_in == "write_save" || command_in == "save" || command_in == "new_save") {
            cout << "Console << ";
            string n; cin >> n; save_data(n);
            cout << "Glasfany >> save created: " << n;
        }
        else {
            cout << "\nConsole >> error! unknown command";
        }
}
else return;
}

void mine(int index) {
    switch (index)
    {
    case 1:   
        if (!st1.is_dig) if (pickaxe >= 1) {
             pickaxe--;   click.play();
            st1.is_dig = 1;
            int s_i_index = 0;
            st1.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }else cout << "\nGlasfany >> unknown error!";
        break;
    case 2:
        if (!st2.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
            st2.is_dig = 1;//добавить индексы во все строки
        int s_i_index = 1;
            st2.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 3:
        if (!st3.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
            st3.is_dig = 1;
        int s_i_index = 2;
            st3.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 4:
        if (!st4.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 3;
        st4.is_dig = 4;
            st4.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 5:
        if (!st5.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 4;
        st5.is_dig = 1;
            st5.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 6:
        if (!st6.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 5;
        st6.is_dig = 1;
            st6.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 7:
        if (!st7.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 6;
        st7.is_dig = 1;
            st7.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 8:
        if (!st8.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 7;
        st8.is_dig = 1;
            st8.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 9:
        if (!st9.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 8;
        st9.is_dig = 1;
            st9.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 10:
        if (!st10.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 9;
        st10.is_dig = 1;
            st10.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 11:
        if (!st11.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 10;
        st11.is_dig = 1;
            st11.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 12:
        if (!st12.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 11;
        st12.is_dig = 1;
            st12.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 13:
        if (!st13.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 12;
        st13.is_dig = 1;
            st13.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 14:
        if (!st14.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 13;
        st14.is_dig = 1;
            st14.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 15:
        if (!st15.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 14;
        st15.is_dig = 1;
            st15.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 16:
        if (!st16.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 15;
        st16.is_dig = 1;
            st16.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 17:
        if (!st17.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 16;
        st17.is_dig = 1;
            st17.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 18:
        if (!st18.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 17;
        st18.is_dig = 1;
            st18.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 19:
        if (!st19.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 18;
        st19.is_dig = 1;
            st19.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 20:
        if (!st20.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 19;
        st20.is_dig = 1;
            st20.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 21:
        if (!st21.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 20;
        st21.is_dig = 1;
            st21.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 22:
        if (!st22.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 21;
        st22.is_dig = 1;
            st22.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 23:
        if (!st23.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 22;
        st23.is_dig = 1;
            st23.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 24:
        if (!st24.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 23;
        st24.is_dig = 1;
            st24.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 25:
        if (!st25.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 24;
        st25.is_dig = 1;
            st25.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 26:
        if (!st26.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 25;
        st26.is_dig = 1;
            st26.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 27:
        if (!st27.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 26;
        st27.is_dig = 1;
            st27.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 28:
        if (!st28.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 27;
        st28.is_dig = 1;
            st28.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 29:
        if (!st29.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 28;
        st29.is_dig = 1;
            st29.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 30:
        if (!st30.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 29;
        st30.is_dig = 1;
            st30.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 31:
        if (!st31.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 30;
        st31.is_dig = 1;
            st31.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 32:
        if (!st32.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 31;
        st32.is_dig = 1;
            st32.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 33:
        if (!st33.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 32;
        st33.is_dig = 1;
            st33.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 34:
        if (!st34.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 33;
        st34.is_dig = 1;
            st34.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    case 35:
        if (!st35.is_dig) if (pickaxe>=1) {  pickaxe--;   click.play();
        int s_i_index = 34;
        st35.is_dig = 1;
            st35.res = mine_ore_R[s_i_index];
            if (mine_ore_R[s_i_index] == 1){ coal++; ex++;}
            else if (mine_ore_R[s_i_index] == 2){ iron++; ex+=3;}
            else if (mine_ore_R[s_i_index] == 3){ gold++; ex+=5;}
            else if (mine_ore_R[s_i_index] == 4){ diamond++; ex+=8;}
        }
        else cout << "\nGlasfany >> unknown error!";
        break;
    }
    //сохранение
}

void save_data(string _nameF) {
    ofstream Data;

    string _adres_ = "gamedata\\saves\\" + _nameF + ".data";

    Data.open(_adres_);

    Data << "<level>\n" << level << "\n<is-start-game>\n" << start_Play << "\n<is-dialog-game>\n" << isDialog << "\n<silver_ore>\n" << silver << "\n<coal_ore>\n" << coal
        << "\n<iron_ore>\n" << iron << "\n<gold_ore>\n" << gold << "\n<diamond_ore>\n" << diamond << "\n<wood_i>\n" << wood << "\n<pickaxe_i>\n" << pickaxe << "\n<stal_i>\n" << stal
        << "\n<sword_i>\n" << sword << "\n<armor_i>\n" << armor << "\n<ex_i>\n" << ex << "\n<zele_reg_i>\n" << zele_reg << "\n<axe_i>\n" << axe << "\n<bow_i>\n" << bow << "\n<arrow_i>\n" << arrow
        << "\n<chest_i_1>\n" << chest_1 << "\n<chest_i_2>\n" << chest_2 << "\n<chest_i_3>\n" << chest_3 << "\n<chest_i_4>\n" << chest_4 << "\n<zele_pow_i>\n" << zele_pow << "\n<live>\n" << live
        << "\n<atak_zel>\n" << atak_zel << "\n<level_war>\n" << level_war << "\n<door_1>\n" << door[0] << "\n<door_1_>\n" << door_[0] << "\n<door_2>\n" << door[1] << "\n<door_2_>\n" << door_[1]
        << "\n<door_3>\n" << door[2] << "\n<door_3_>\n" << door_[2] << "\n<cv_>\n" << cvest << "\n<cv_p>\n" << cv_progres;
   
    Data.close();

    ofstream Data1;

    string _adres__ = "gamedata\\config\\setings.config";

    Data1.open(_adres__);

    Data1 << "<volume_m>\n" << volume_m << "\n<volume_s>\n" << volume_s;

    Data1.close();
    cout << "\nGlasfany >> save successfully recorded\n";
}

void save_data_all() {
    ofstream Data;

    string _adres_ = "gamedata\\saves\\autosave.data";

    Data.open(_adres_);

    Data << "<level>\n" << 0 << "\n<is-start-game>\n" << 0 << "\n<is-dialog-game>\n" << 0 << "\n<silver_ore>\n" << 500 << "\n<coal_ore>\n" << 0
        << "\n<iron_ore>\n" << 0 << "\n<gold_ore>\n" << 0 << "\n<diamond_ore>\n" << 0 << "\n<wood_i>\n" << 0 << "\n<pickaxe_i>\n" << 50 << "\n<stal_i>\n" << 0
        << "\n<sword_i>\n" << 0 << "\n<armor_i>\n" << 0 << "\n<ex_i>\n" << 0 << "\n<zele_reg_i>\n" << 0 << "\n<axe_i>\n" << 50 << "\n<bow_i>\n" << 0 << "\n<arrow_i>\n" << 0
        << "\n<chest_i_1>\n" << 5 << "\n<chest_i_2>\n" << 3 << "\n<chest_i_3>\n" << 0 << "\n<chest_i_4>\n" << 0 << "\n<zele_pow_i>\n" << 0 << "\n<live>\n" << 100
        << "\n<atak_zel>\n" << 0 << "\n<level_war>\n" << 0 << "\n<door_1>\n" << door[0] << "\n<door_1_>\n" << door_[0] << "\n<door_2>\n" << door[1] << "\n<door_2_>\n" << door_[1]
        << "\n<door_3>\n" << door[2] << "\n<door_3_>\n" << door_[2] << "\n<cv_>\n" << 1 << "\n<cv_p>\n" << 0;

    Data.close();

    ofstream Data1;

    string _adres__ = "gamedata\\config\\setings.config";

    Data1.open(_adres__);

    Data1 << "<volume_m>\n" << volume_m << "\n<volume_s>\n" << volume_s;

    Data1.close();
    cout << "\nGlasfany >> save successfully recorded\n";
}

bool loading_config_setings_ReadFile() {

    const string adres = "gamedata\\config\\setings.config";
    ifstream Data;
    Data.open(adres);
    cout << "\nGlasfany >> attempt to open a save file";
    if (!Data.is_open()) {
        Data.close();
        cout << "\n\nERROR!   failure to open config file further operation of the program is impossible!\n";
        return 0;

    }
    else {
        Data.close();

        string n = " ";

        for (Data.open(adres); !Data.eof();) {
            getline(Data, n);
            stringstream ss, ss1;

            if (n == "<volume_m>") {
                getline(Data, n);
                ss << n;
                ss >> volume_m;
            }
            if (n == "<volume_s>") {
                getline(Data, n);
                ss << n;
                ss >> volume_s;
            }


        }
        Data.close();



        cout << "\nGlasfany >> successful reading of the save file";
        return 1;
    }
}

string load_text(string name_file) {
    
        ifstream Data;
        string adress_ = "gamedata\\config\\text\\language\\" + name_file;
        Data.open(adress_);
        char ch;
        string nn;
        while (Data.get(ch)) {
            nn += ch;
        }
        Data.close();
        return nn;
}
