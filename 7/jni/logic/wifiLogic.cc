#pragma once
#include "uart/ProtocolSender.h"
/*
*此文件由GUI工具生成
*文件功能：用于处理用户的逻辑相应代码
*功能说明：
*========================onButtonClick_XXXX
当页面中的按键按下后系统会调用对应的函数，XXX代表GUI工具里面的[ID值]名称，
如Button1,当返回值为false的时候系统将不再处理这个按键，返回true的时候系统将会继续处理此按键。比如SYS_BACK.
*========================onSlideWindowItemClick_XXXX(int index) 
当页面中存在滑动窗口并且用户点击了滑动窗口的图标后系统会调用此函数,XXX代表GUI工具里面的[ID值]名称，
如slideWindow1;index 代表按下图标的偏移值
*========================onSeekBarChange_XXXX(int progress) 
当页面中存在滑动条并且用户改变了进度后系统会调用此函数,XXX代表GUI工具里面的[ID值]名称，
如SeekBar1;progress 代表当前的进度值
*========================ogetListItemCount_XXXX() 
当页面中存在滑动列表的时候，更新的时候系统会调用此接口获取列表的总数目,XXX代表GUI工具里面的[ID值]名称，
如List1;返回值为当前列表的总条数
*========================oobtainListItemData_XXXX(ZKListView::ZKListItem *pListItem, int index)
 当页面中存在滑动列表的时候，更新的时候系统会调用此接口获取列表当前条目下的内容信息,XXX代表GUI工具里面的[ID值]名称，
如List1;pListItem 是贴图中的单条目对象，index是列表总目的偏移量。具体见函数说明
*========================常用接口===============
*LOGD(...)  打印调试信息的接口
*mTextXXXPtr->setText("****") 在控件TextXXX上显示文字****
*mButton1Ptr->setSelected(true); 将控件mButton1设置为选中模式，图片会切换成选中图片，按钮文字会切换为选中后的颜色
*mSeekBarPtr->setProgress(12) 在控件mSeekBar上将进度调整到12
*mListView1Ptr->refreshListView() 让mListView1 重新刷新，当列表数据变化后调用
*mDashbroadView1Ptr->setTargetAngle(120) 在控件mDashbroadView1上指针显示角度调整到120度
*
* 在Eclipse编辑器中  使用 “alt + /”  快捷键可以打开智能提示
*/


/**
 * 注册定时器
 * 填充数组用于注册定时器
 * 注意：id不能重复
 */
static S_ACTIVITY_TIMEER REGISTER_ACTIVITY_TIMER_TAB[] = {
	//{0,  6000}, //定时器id=0, 时间间隔6秒
	//{1,  1000},
};

/**
 * 当界面构造时触发
 */
static void onUI_init(){
    //Tips :添加 UI初始化的显示代码到这里,如:mText1Ptr->setText("123");

}

/**
 * 当切换到该界面时触发
 */
static void onUI_intent(const Intent *intentPtr) {
    if (intentPtr != NULL) {
        //TODO
    }
}

/*
 * 当界面显示时触发
 */
static void onUI_show() {

}

/*
 * 当界面隐藏时触发
 */
static void onUI_hide() {

}

/*
 * 当界面完全退出时触发
 */
static void onUI_quit() {

}

/**
 * 串口数据回调接口
 */
static void onProtocolDataUpdate(const SProtocolData &data) {

}

/**
 * 定时器触发函数
 * 不建议在此函数中写耗时操作，否则将影响UI刷新
 * 参数： id
 *         当前所触发定时器的id，与注册时的id相同
 * 返回值: true
 *             继续运行当前定时器
 *         false
 *             停止运行当前定时器
 */
static bool onUI_Timer(int id){
	switch (id) {

		default:
			break;
	}
    return true;
}

/**
 * 有新的触摸事件时触发
 * 参数：ev
 *         新的触摸事件
 * 返回值：true
 *            表示该触摸事件在此被拦截，系统不再将此触摸事件传递到控件上
 *         false
 *            触摸事件将继续传递到控件上
 */
static bool onwifiActivityTouchEvent(const MotionEvent &ev) {
    switch (ev.mActionStatus) {
		case MotionEvent::E_ACTION_DOWN://触摸按下
			//LOGD("时刻 = %ld 坐标  x = %d, y = %d", ev.mEventTime, ev.mX, ev.mY);
			break;
		case MotionEvent::E_ACTION_MOVE://触摸滑动
			break;
		case MotionEvent::E_ACTION_UP:  //触摸抬起
			break;
		default:
			break;
	}
	return false;
}
static bool onButtonClick_Main_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Main_Button !!!\n");
    return false;
}

static bool onButtonClick_Layer2_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Layer2_Button !!!\n");
    return false;
}

static bool onButtonClick_File_Button(ZKButton *pButton) {
    LOGD(" ButtonClick File_Button !!!\n");
    return false;
}

static bool onButtonClick_Button73(ZKButton *pButton) {
    LOGD(" ButtonClick Button73 !!!\n");
    return false;
}

static bool onButtonClick_Screen_set_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Screen_set_Button !!!\n");
    return false;
}

static void onProgressChanged_Print_SeekBar(ZKSeekBar *pSeekBar, int progress) {
    //LOGD(" ProgressChanged Print_SeekBar %d !!!\n", progress);
}

static bool onButtonClick_Skip_it_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Skip_it_Button !!!\n");
    return false;
}

static bool onButtonClick_Pause_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Pause_Button !!!\n");
    return false;
}

static bool onButtonClick_Stop_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Stop_Button !!!\n");
    return false;
}

static bool onButtonClick_Zoffset_Down_button(ZKButton *pButton) {
    LOGD(" ButtonClick Zoffset_Down_button !!!\n");
    return false;
}

static bool onButtonClick_Zoffset_Up_button(ZKButton *pButton) {
    LOGD(" ButtonClick Zoffset_Up_button !!!\n");
    return false;
}

static bool onButtonClick_zoffset0005_Button(ZKButton *pButton) {
    LOGD(" ButtonClick zoffset0005_Button !!!\n");
    return false;
}

static bool onButtonClick_Z_Offset_Reverse_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Z_Offset_Reverse_Button !!!\n");
    return false;
}

static bool onButtonClick_zoffset001_Button(ZKButton *pButton) {
    LOGD(" ButtonClick zoffset001_Button !!!\n");
    return false;
}

static bool onButtonClick_zoffset0025_Button(ZKButton *pButton) {
    LOGD(" ButtonClick zoffset0025_Button !!!\n");
    return false;
}

static bool onButtonClick_zoffset005_Button(ZKButton *pButton) {
    LOGD(" ButtonClick zoffset005_Button !!!\n");
    return false;
}

static bool onButtonClick_speed_Button(ZKButton *pButton) {
    LOGD(" ButtonClick speed_Button !!!\n");
    return false;
}

static int getListItemCount_ListView1(const ZKListView *pListView) {
    //LOGD("getListItemCount_ListView1 !\n");
    return 6;
}

static void obtainListItemData_ListView1(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ ListView1  !!!\n");
}

static void onListItemClick_ListView1(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ ListView1  !!!\n");
}

static bool onButtonClick_bed_temp_button(ZKButton *pButton) {
    LOGD(" ButtonClick bed_temp_button !!!\n");
    return false;
}

static bool onButtonClick_Button50(ZKButton *pButton) {
    LOGD(" ButtonClick Button50 !!!\n");
    return false;
}

static bool onButtonClick_Button98(ZKButton *pButton) {
    LOGD(" ButtonClick Button98 !!!\n");
    return false;
}

static bool onButtonClick_Button100(ZKButton *pButton) {
    LOGD(" ButtonClick Button100 !!!\n");
    return false;
}

static bool onButtonClick_Button101(ZKButton *pButton) {
    LOGD(" ButtonClick Button101 !!!\n");
    return false;
}

static bool onButtonClick_obj_B0(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B0 !!!\n");
    return false;
}

static bool onButtonClick_obj_B1(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B1 !!!\n");
    return false;
}

static bool onButtonClick_obj_B2(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B2 !!!\n");
    return false;
}

static bool onButtonClick_obj_B3(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B3 !!!\n");
    return false;
}

static bool onButtonClick_obj_B4(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B4 !!!\n");
    return false;
}

static bool onButtonClick_obj_B5(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B5 !!!\n");
    return false;
}

static bool onButtonClick_obj_B6(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B6 !!!\n");
    return false;
}

static bool onButtonClick_obj_B7(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B7 !!!\n");
    return false;
}

static bool onButtonClick_obj_B8(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B8 !!!\n");
    return false;
}

static bool onButtonClick_obj_B9(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B9 !!!\n");
    return false;
}

static bool onButtonClick_obj_B10(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B10 !!!\n");
    return false;
}

static bool onButtonClick_obj_B11(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B11 !!!\n");
    return false;
}

static bool onButtonClick_obj_B12(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B12 !!!\n");
    return false;
}

static bool onButtonClick_obj_B13(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B13 !!!\n");
    return false;
}

static bool onButtonClick_obj_B14(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B14 !!!\n");
    return false;
}

static bool onButtonClick_obj_B15(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B15 !!!\n");
    return false;
}

static bool onButtonClick_obj_B16(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B16 !!!\n");
    return false;
}

static bool onButtonClick_obj_B17(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B17 !!!\n");
    return false;
}

static bool onButtonClick_obj_B18(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B18 !!!\n");
    return false;
}

static bool onButtonClick_obj_B19(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B19 !!!\n");
    return false;
}

static bool onButtonClick_obj_B20(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B20 !!!\n");
    return false;
}

static bool onButtonClick_obj_B21(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B21 !!!\n");
    return false;
}

static bool onButtonClick_obj_B22(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B22 !!!\n");
    return false;
}

static bool onButtonClick_obj_B23(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B23 !!!\n");
    return false;
}

static bool onButtonClick_obj_B24(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B24 !!!\n");
    return false;
}

static bool onButtonClick_obj_B25(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B25 !!!\n");
    return false;
}

static bool onButtonClick_obj_B26(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B26 !!!\n");
    return false;
}

static bool onButtonClick_obj_B27(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B27 !!!\n");
    return false;
}

static bool onButtonClick_obj_B28(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B28 !!!\n");
    return false;
}

static bool onButtonClick_obj_B29(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B29 !!!\n");
    return false;
}

static bool onButtonClick_obj_B30(ZKButton *pButton) {
    LOGD(" ButtonClick obj_B30 !!!\n");
    return false;
}

static void onProgressChanged_Obj_SeekBar(ZKSeekBar *pSeekBar, int progress) {
    //LOGD(" ProgressChanged Obj_SeekBar %d !!!\n", progress);
}

static bool onButtonClick_Button5(ZKButton *pButton) {
    LOGD(" ButtonClick Button5 !!!\n");
    return false;
}

static bool onButtonClick_Button_td(ZKButton *pButton) {
    LOGD(" ButtonClick Button_td !!!\n");
    return false;
}

static bool onButtonClick_Button_cl(ZKButton *pButton) {
    LOGD(" ButtonClick Button_cl !!!\n");
    return false;
}

static bool onButtonClick_Button55(ZKButton *pButton) {
    LOGD(" ButtonClick Button55 !!!\n");
    return false;
}

static bool onButtonClick_Button2(ZKButton *pButton) {
    LOGD(" ButtonClick Button2 !!!\n");
    return false;
}

static bool onButtonClick_Button3(ZKButton *pButton) {
    LOGD(" ButtonClick Button3 !!!\n");
    return false;
}

static bool onButtonClick_Button56(ZKButton *pButton) {
    LOGD(" ButtonClick Button56 !!!\n");
    return false;
}

static bool onButtonClick_Button66(ZKButton *pButton) {
    LOGD(" ButtonClick Button66 !!!\n");
    return false;
}

static bool onButtonClick_Button_home(ZKButton *pButton) {
    LOGD(" ButtonClick Button_home !!!\n");
    return false;
}

static bool onButtonClick_Button68(ZKButton *pButton) {
    LOGD(" ButtonClick Button68 !!!\n");
    return false;
}

static bool onButtonClick_Button1(ZKButton *pButton) {
    LOGD(" ButtonClick Button1 !!!\n");
    return false;
}

static bool onButtonClick_X_U10_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick X_U10_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_X_U1_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick X_U1_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_X_D10_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick X_D10_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_X_D1_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick X_D1_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_Y_U10_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick Y_U10_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_Y_U1_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick Y_U1_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_Y_D10_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick Y_D10_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_Y_D1_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick Y_D1_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_lyayer2_nozzle_temp_button(ZKButton *pButton) {
    LOGD(" ButtonClick lyayer2_nozzle_temp_button !!!\n");
    return false;
}

static bool onButtonClick_lyayer2_bed_temp_button(ZKButton *pButton) {
    LOGD(" ButtonClick lyayer2_bed_temp_button !!!\n");
    return false;
}

static bool onButtonClick_Button103(ZKButton *pButton) {
    LOGD(" ButtonClick Button103 !!!\n");
    return false;
}

static bool onButtonClick_layer2_speed_button(ZKButton *pButton) {
    LOGD(" ButtonClick layer2_speed_button !!!\n");
    return false;
}

static bool onButtonClick_Fan_layer_open_button(ZKButton *pButton) {
    LOGD(" ButtonClick Fan_layer_open_button !!!\n");
    return false;
}

static bool onButtonClick_Button_moto_revers(ZKButton *pButton) {
    LOGD(" ButtonClick Button_moto_revers !!!\n");
    return false;
}

static bool onButtonClick_Button_unlock(ZKButton *pButton) {
    LOGD(" ButtonClick Button_unlock !!!\n");
    return false;
}

static bool onButtonClick_move100_Button(ZKButton *pButton) {
    LOGD(" ButtonClick move100_Button !!!\n");
    return false;
}

static bool onButtonClick_move1_Button(ZKButton *pButton) {
    LOGD(" ButtonClick move1_Button !!!\n");
    return false;
}

static bool onButtonClick_move01_Button(ZKButton *pButton) {
    LOGD(" ButtonClick move01_Button !!!\n");
    return false;
}

static bool onButtonClick_move10_Button(ZKButton *pButton) {
    LOGD(" ButtonClick move10_Button !!!\n");
    return false;
}

static bool onButtonClick_Button8(ZKButton *pButton) {
    LOGD(" ButtonClick Button8 !!!\n");
    return false;
}

static bool onButtonClick_Button9(ZKButton *pButton) {
    LOGD(" ButtonClick Button9 !!!\n");
    return false;
}

static bool onButtonClick_Button10(ZKButton *pButton) {
    LOGD(" ButtonClick Button10 !!!\n");
    return false;
}

static bool onButtonClick_Button11(ZKButton *pButton) {
    LOGD(" ButtonClick Button11 !!!\n");
    return false;
}

static bool onButtonClick_FAN1_SW_Button(ZKButton *pButton) {
    LOGD(" ButtonClick FAN1_SW_Button !!!\n");
    return false;
}

static bool onButtonClick_FAN2_SW_Button(ZKButton *pButton) {
    LOGD(" ButtonClick FAN2_SW_Button !!!\n");
    return false;
}

static bool onButtonClick_FAN3_SW_Button(ZKButton *pButton) {
    LOGD(" ButtonClick FAN3_SW_Button !!!\n");
    return false;
}

static bool onButtonClick_FAN1_ICON(ZKButton *pButton) {
    LOGD(" ButtonClick FAN1_ICON !!!\n");
    return false;
}

static bool onButtonClick_FAN2_ICON(ZKButton *pButton) {
    LOGD(" ButtonClick FAN2_ICON !!!\n");
    return false;
}

static bool onButtonClick_FAN3_ICON(ZKButton *pButton) {
    LOGD(" ButtonClick FAN3_ICON !!!\n");
    return false;
}

static bool onButtonClick_FAN1_UP(ZKButton *pButton) {
    LOGD(" ButtonClick FAN1_UP !!!\n");
    return false;
}

static bool onButtonClick_FAN1_DOWN(ZKButton *pButton) {
    LOGD(" ButtonClick FAN1_DOWN !!!\n");
    return false;
}

static bool onButtonClick_FAN2_UP(ZKButton *pButton) {
    LOGD(" ButtonClick FAN2_UP !!!\n");
    return false;
}

static bool onButtonClick_FAN2_DOWN(ZKButton *pButton) {
    LOGD(" ButtonClick FAN2_DOWN !!!\n");
    return false;
}

static bool onButtonClick_FAN3_UP(ZKButton *pButton) {
    LOGD(" ButtonClick FAN3_UP !!!\n");
    return false;
}

static bool onButtonClick_FAN3_DOWN(ZKButton *pButton) {
    LOGD(" ButtonClick FAN3_DOWN !!!\n");
    return false;
}

static bool onButtonClick_JZ_Button(ZKButton *pButton) {
    LOGD(" ButtonClick JZ_Button !!!\n");
    return false;
}

static bool onButtonClick_hc_hg_Button(ZKButton *pButton) {
    LOGD(" ButtonClick hc_hg_Button !!!\n");
    return false;
}

static bool onButtonClick_Button61(ZKButton *pButton) {
    LOGD(" ButtonClick Button61 !!!\n");
    return false;
}

static bool onButtonClick_Button62(ZKButton *pButton) {
    LOGD(" ButtonClick Button62 !!!\n");
    return false;
}

static bool onButtonClick_Tool_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Tool_Button !!!\n");
    return false;
}

static bool onButtonClick_Button_cd(ZKButton *pButton) {
    LOGD(" ButtonClick Button_cd !!!\n");
    return false;
}

static bool onButtonClick_temp_move_Button(ZKButton *pButton) {
    LOGD(" ButtonClick temp_move_Button !!!\n");
    return false;
}

static bool onButtonClick_Button59(ZKButton *pButton) {
    LOGD(" ButtonClick Button59 !!!\n");
    return false;
}

static bool onButtonClick_Button75(ZKButton *pButton) {
    LOGD(" ButtonClick Button75 !!!\n");
    return false;
}

static bool onButtonClick_Button76(ZKButton *pButton) {
    LOGD(" ButtonClick Button76 !!!\n");
    return false;
}

static bool onButtonClick_Button77(ZKButton *pButton) {
    LOGD(" ButtonClick Button77 !!!\n");
    return false;
}

static bool onButtonClick_Button79(ZKButton *pButton) {
    LOGD(" ButtonClick Button79 !!!\n");
    return false;
}

static bool onButtonClick_Button81(ZKButton *pButton) {
    LOGD(" ButtonClick Button81 !!!\n");
    return false;
}

static bool onButtonClick_Button82(ZKButton *pButton) {
    LOGD(" ButtonClick Button82 !!!\n");
    return false;
}

static bool onButtonClick_Button80(ZKButton *pButton) {
    LOGD(" ButtonClick Button80 !!!\n");
    return false;
}

static bool onButtonClick_jz_win_close_button(ZKButton *pButton) {
    LOGD(" ButtonClick jz_win_close_button !!!\n");
    return false;
}

static bool onButtonClick_Button6(ZKButton *pButton) {
    LOGD(" ButtonClick Button6 !!!\n");
    return false;
}

static bool onButtonClick_Button23(ZKButton *pButton) {
    LOGD(" ButtonClick Button23 !!!\n");
    return false;
}

static bool onButtonClick_Button24(ZKButton *pButton) {
    LOGD(" ButtonClick Button24 !!!\n");
    return false;
}

static bool onButtonClick_Button25(ZKButton *pButton) {
    LOGD(" ButtonClick Button25 !!!\n");
    return false;
}

static bool onButtonClick_Button26(ZKButton *pButton) {
    LOGD(" ButtonClick Button26 !!!\n");
    return false;
}

static int getListItemCount_ListView2(const ZKListView *pListView) {
    //LOGD("getListItemCount_ListView2 !\n");
    return 5;
}

static void obtainListItemData_ListView2(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ ListView2  !!!\n");
}

static void onListItemClick_ListView2(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ ListView2  !!!\n");
}

static bool onButtonClick_Button27(ZKButton *pButton) {
    LOGD(" ButtonClick Button27 !!!\n");
    return false;
}

static int getListItemCount_ListView3(const ZKListView *pListView) {
    //LOGD("getListItemCount_ListView3 !\n");
    return 5;
}

static void obtainListItemData_ListView3(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ ListView3  !!!\n");
}

static void onListItemClick_ListView3(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ ListView3  !!!\n");
}

static bool onButtonClick_File_Refresh_button(ZKButton *pButton) {
    LOGD(" ButtonClick File_Refresh_button !!!\n");
    return false;
}

static int getListItemCount_FileList(const ZKListView *pListView) {
    //LOGD("getListItemCount_FileList !\n");
    return 15;
}

static void obtainListItemData_FileList(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ FileList  !!!\n");
}

static void onListItemClick_FileList(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ FileList  !!!\n");
}

static bool onButtonClick_ms_file_button(ZKButton *pButton) {
    LOGD(" ButtonClick ms_file_button !!!\n");
    return false;
}

static bool onButtonClick_Sd_button(ZKButton *pButton) {
    LOGD(" ButtonClick Sd_button !!!\n");
    return false;
}

static bool onButtonClick_Udesk_button(ZKButton *pButton) {
    LOGD(" ButtonClick Udesk_button !!!\n");
    return false;
}

static bool onButtonClick_Board_SD_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Board_SD_Button !!!\n");
    return false;
}

static bool onButtonClick_Button4(ZKButton *pButton) {
    LOGD(" ButtonClick Button4 !!!\n");
    return false;
}

static bool onButtonClick_Button7(ZKButton *pButton) {
    LOGD(" ButtonClick Button7 !!!\n");
    return false;
}

static bool onButtonClick_Updata_Slave(ZKButton *pButton) {
    LOGD(" ButtonClick Updata_Slave !!!\n");
    return false;
}

static bool onButtonClick_Updata_Slave_printing(ZKButton *pButton) {
    LOGD(" ButtonClick Updata_Slave_printing !!!\n");
    return false;
}

static bool onButtonClick_Button_Preheat(ZKButton *pButton) {
    LOGD(" ButtonClick Button_Preheat !!!\n");
    return false;
}

static bool onButtonClick_Button_Del(ZKButton *pButton) {
    LOGD(" ButtonClick Button_Del !!!\n");
    return false;
}

static bool onButtonClick_Button_add_list(ZKButton *pButton) {
    LOGD(" ButtonClick Button_add_list !!!\n");
    return false;
}

static int getListItemCount_download_list(const ZKListView *pListView) {
    //LOGD("getListItemCount_download_list !\n");
    return 10;
}

static void obtainListItemData_download_list(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ download_list  !!!\n");
}

static void onListItemClick_download_list(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ download_list  !!!\n");
}

static bool onButtonClick_Button20(ZKButton *pButton) {
    LOGD(" ButtonClick Button20 !!!\n");
    return false;
}

static bool onButtonClick_Button31(ZKButton *pButton) {
    LOGD(" ButtonClick Button31 !!!\n");
    return false;
}

static bool onButtonClick_Button19(ZKButton *pButton) {
    LOGD(" ButtonClick Button19 !!!\n");
    return false;
}

static bool onButtonClick_Button22(ZKButton *pButton) {
    LOGD(" ButtonClick Button22 !!!\n");
    return false;
}

static bool onButtonClick_Button21(ZKButton *pButton) {
    LOGD(" ButtonClick Button21 !!!\n");
    return false;
}

static int getListItemCount_Print_ListView1(const ZKListView *pListView) {
    //LOGD("getListItemCount_Print_ListView1 !\n");
    return 9;
}

static void obtainListItemData_Print_ListView1(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Print_ListView1  !!!\n");
}

static void onListItemClick_Print_ListView1(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Print_ListView1  !!!\n");
}

static int getListItemCount_Print_set_list(const ZKListView *pListView) {
    //LOGD("getListItemCount_Print_set_list !\n");
    return 5;
}

static void obtainListItemData_Print_set_list(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Print_set_list  !!!\n");
}

static void onListItemClick_Print_set_list(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Print_set_list  !!!\n");
}

static bool onButtonClick_Button41(ZKButton *pButton) {
    LOGD(" ButtonClick Button41 !!!\n");
    return false;
}

static bool onButtonClick_Button42(ZKButton *pButton) {
    LOGD(" ButtonClick Button42 !!!\n");
    return false;
}

static bool onButtonClick_Button43(ZKButton *pButton) {
    LOGD(" ButtonClick Button43 !!!\n");
    return false;
}

static bool onButtonClick_Button44(ZKButton *pButton) {
    LOGD(" ButtonClick Button44 !!!\n");
    return false;
}

static bool onButtonClick_Print_set_button(ZKButton *pButton) {
    LOGD(" ButtonClick Print_set_button !!!\n");
    return false;
}

static int getListItemCount_Num_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_Num_ListView !\n");
    return 6;
}

static void obtainListItemData_Num_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Num_ListView  !!!\n");
}

static void onListItemClick_Num_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Num_ListView  !!!\n");
}

static int getListItemCount_Set_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_Set_ListView !\n");
    return 6;
}

static void obtainListItemData_Set_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Set_ListView  !!!\n");
}

static void onListItemClick_Set_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Set_ListView  !!!\n");
}

static int getListItemCount_Print_img_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_Print_img_ListView !\n");
    return 9;
}

static void obtainListItemData_Print_img_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Print_img_ListView  !!!\n");
}

static void onListItemClick_Print_img_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Print_img_ListView  !!!\n");
}

static int getListItemCount_ListView5(const ZKListView *pListView) {
    //LOGD("getListItemCount_ListView5 !\n");
    return 13;
}

static void obtainListItemData_ListView5(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ ListView5  !!!\n");
}

static void onListItemClick_ListView5(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ ListView5  !!!\n");
}

static int getListItemCount_ERCF_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_ERCF_ListView !\n");
    return 8;
}

static void obtainListItemData_ERCF_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ ERCF_ListView  !!!\n");
}

static void onListItemClick_ERCF_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ ERCF_ListView  !!!\n");
}

static bool onButtonClick_ERCF_CA_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_CA_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_ERCF_E_ADD(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_E_ADD !!!\n");
    return false;
}

static bool onButtonClick_ERCF_E(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_E !!!\n");
    return false;
}

static bool onButtonClick_ERCF_MOTOR_OFF(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_MOTOR_OFF !!!\n");
    return false;
}

static bool onButtonClick_ERCF_HOME(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_HOME !!!\n");
    return false;
}

static bool onButtonClick_Button34(ZKButton *pButton) {
    LOGD(" ButtonClick Button34 !!!\n");
    return false;
}

static bool onButtonClick_Button35(ZKButton *pButton) {
    LOGD(" ButtonClick Button35 !!!\n");
    return false;
}

static bool onButtonClick_Button37(ZKButton *pButton) {
    LOGD(" ButtonClick Button37 !!!\n");
    return false;
}

static bool onButtonClick_Button38(ZKButton *pButton) {
    LOGD(" ButtonClick Button38 !!!\n");
    return false;
}

static bool onButtonClick_Button39(ZKButton *pButton) {
    LOGD(" ButtonClick Button39 !!!\n");
    return false;
}

static bool onButtonClick_Button40(ZKButton *pButton) {
    LOGD(" ButtonClick Button40 !!!\n");
    return false;
}

static bool onButtonClick_ERCF_CA_BACK(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_CA_BACK !!!\n");
    return false;
}

static bool onButtonClick_ERCF_SERVO_BACK(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_SERVO_BACK !!!\n");
    return false;
}

static bool onButtonClick_ERCF_SERVO_DOWN_Button(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_SERVO_DOWN_Button !!!\n");
    return false;
}

static bool onButtonClick_ERCF_SERVO_UP_Button(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_SERVO_UP_Button !!!\n");
    return false;
}

static bool onButtonClick_ERCF_MOTOR_OFF2(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_MOTOR_OFF2 !!!\n");
    return false;
}

static bool onButtonClick_ERCF_TOOL_BACK(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_TOOL_BACK !!!\n");
    return false;
}

static bool onButtonClick_ERCF_TOOOL_CA(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_TOOOL_CA !!!\n");
    return false;
}

static int getListItemCount_ERCF_CA_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_ERCF_CA_ListView !\n");
    return 8;
}

static void obtainListItemData_ERCF_CA_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ ERCF_CA_ListView  !!!\n");
}

static void onListItemClick_ERCF_CA_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ ERCF_CA_ListView  !!!\n");
}

static int getListItemCount_ListView6(const ZKListView *pListView) {
    //LOGD("getListItemCount_ListView6 !\n");
    return 8;
}

static void obtainListItemData_ListView6(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ ListView6  !!!\n");
}

static void onListItemClick_ListView6(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ ListView6  !!!\n");
}

static bool onButtonClick_ERCF_MOTOR_OFF1(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_MOTOR_OFF1 !!!\n");
    return false;
}

static bool onButtonClick_ERCF_EX_BACK(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_EX_BACK !!!\n");
    return false;
}

static bool onButtonClick_ERCF_EX_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_EX_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_ERCF_EX_TRUE_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_EX_TRUE_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_ERCF_SENSOR_BACK(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_SENSOR_BACK !!!\n");
    return false;
}

static bool onButtonClick_ERCF_SENSOR_TRUE_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_SENSOR_TRUE_BUTTON !!!\n");
    return false;
}

static bool onButtonClick_ERCF_BOWDEN_BACK(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_BOWDEN_BACK !!!\n");
    return false;
}

static bool onButtonClick_ERCF_BOWDEN_CA_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick ERCF_BOWDEN_CA_BUTTON !!!\n");
    return false;
}

static int getListItemCount_COLOR_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_COLOR_ListView !\n");
    return 30;
}

static void obtainListItemData_COLOR_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ COLOR_ListView  !!!\n");
}

static void onListItemClick_COLOR_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ COLOR_ListView  !!!\n");
}

static void onProgressChanged_brightnes_SeekBar(ZKSeekBar *pSeekBar, int progress) {
    //LOGD(" ProgressChanged brightnes_SeekBar %d !!!\n", progress);
}

static bool onButtonClick_Button13(ZKButton *pButton) {
    LOGD(" ButtonClick Button13 !!!\n");
    return false;
}

static bool onButtonClick_Button15(ZKButton *pButton) {
    LOGD(" ButtonClick Button15 !!!\n");
    return false;
}

static bool onButtonClick_Button16(ZKButton *pButton) {
    LOGD(" ButtonClick Button16 !!!\n");
    return false;
}

static bool onButtonClick_Button17(ZKButton *pButton) {
    LOGD(" ButtonClick Button17 !!!\n");
    return false;
}

static bool onButtonClick_Buzz_BUTTON(ZKButton *pButton) {
    LOGD(" ButtonClick Buzz_BUTTON !!!\n");
    return false;
}

static int getListItemCount_Time_out_list(const ZKListView *pListView) {
    //LOGD("getListItemCount_Time_out_list !\n");
    return 5;
}

static void obtainListItemData_Time_out_list(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Time_out_list  !!!\n");
}

static void onListItemClick_Time_out_list(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Time_out_list  !!!\n");
}

static int getListItemCount_Language_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_Language_ListView !\n");
    return 5;
}

static void obtainListItemData_Language_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Language_ListView  !!!\n");
}

static void onListItemClick_Language_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Language_ListView  !!!\n");
}

static bool onButtonClick_Button12(ZKButton *pButton) {
    LOGD(" ButtonClick Button12 !!!\n");
    return false;
}

static bool onButtonClick_Button14(ZKButton *pButton) {
    LOGD(" ButtonClick Button14 !!!\n");
    return false;
}

static bool onButtonClick_Print_again_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Print_again_Button !!!\n");
    return false;
}

static int getListItemCount_ListViewWifiInfo(const ZKListView *pListView) {
    //LOGD("getListItemCount_ListViewWifiInfo !\n");
    return 6;
}

static void obtainListItemData_ListViewWifiInfo(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ ListViewWifiInfo  !!!\n");
}

static void onListItemClick_ListViewWifiInfo(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ ListViewWifiInfo  !!!\n");
}

static bool onButtonClick_ButtonConnect(ZKButton *pButton) {
    LOGD(" ButtonClick ButtonConnect !!!\n");
    return false;
}

static void onEditTextChanged_EdittextPwd(const std::string &text) {
    //LOGD(" onEditTextChanged_ EdittextPwd %s !!!\n", text.c_str());
}

static bool onButtonClick_ButtonShowPwd(ZKButton *pButton) {
    LOGD(" ButtonClick ButtonShowPwd !!!\n");
    return false;
}

static bool onButtonClick_Buttonautoconnect(ZKButton *pButton) {
    LOGD(" ButtonClick Buttonautoconnect !!!\n");
    return false;
}

static bool onButtonClick_ButtonDisconnect(ZKButton *pButton) {
    LOGD(" ButtonClick ButtonDisconnect !!!\n");
    return false;
}

static bool onButtonClick_ButtonForget(ZKButton *pButton) {
    LOGD(" ButtonClick ButtonForget !!!\n");
    return false;
}

static bool onButtonClick_stop_Button(ZKButton *pButton) {
    LOGD(" ButtonClick stop_Button !!!\n");
    return false;
}

static bool onButtonClick_Button29(ZKButton *pButton) {
    LOGD(" ButtonClick Button29 !!!\n");
    return false;
}

static bool onButtonClick_Button30(ZKButton *pButton) {
    LOGD(" ButtonClick Button30 !!!\n");
    return false;
}

static bool onButtonClick_Button36(ZKButton *pButton) {
    LOGD(" ButtonClick Button36 !!!\n");
    return false;
}

static int getListItemCount_Task_List(const ZKListView *pListView) {
    //LOGD("getListItemCount_Task_List !\n");
    return 4;
}

static void obtainListItemData_Task_List(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Task_List  !!!\n");
}

static void onListItemClick_Task_List(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Task_List  !!!\n");
}

static int getListItemCount_Customize_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_Customize_ListView !\n");
    return 16;
}

static void obtainListItemData_Customize_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Customize_ListView  !!!\n");
}

static void onListItemClick_Customize_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Customize_ListView  !!!\n");
}

static bool onButtonClick_Customize_Button(ZKButton *pButton) {
    LOGD(" ButtonClick Customize_Button !!!\n");
    return false;
}

static bool onButtonClick_name_Button(ZKButton *pButton) {
    LOGD(" ButtonClick name_Button !!!\n");
    return false;
}

static bool onButtonClick_gcode_Button(ZKButton *pButton) {
    LOGD(" ButtonClick gcode_Button !!!\n");
    return false;
}

static bool onButtonClick_type_Button(ZKButton *pButton) {
    LOGD(" ButtonClick type_Button !!!\n");
    return false;
}

static bool onButtonClick_Button57(ZKButton *pButton) {
    LOGD(" ButtonClick Button57 !!!\n");
    return false;
}

static bool onButtonClick_Button58(ZKButton *pButton) {
    LOGD(" ButtonClick Button58 !!!\n");
    return false;
}

static bool onButtonClick_open_notify(ZKButton *pButton) {
    LOGD(" ButtonClick open_notify !!!\n");
    return false;
}

static int getListItemCount_Notify_ListView(const ZKListView *pListView) {
    //LOGD("getListItemCount_Notify_ListView !\n");
    return 8;
}

static void obtainListItemData_Notify_ListView(ZKListView *pListView,ZKListView::ZKListItem *pListItem, int index) {
    //LOGD(" obtainListItemData_ Notify_ListView  !!!\n");
}

static void onListItemClick_Notify_ListView(ZKListView *pListView, int index, int id) {
    //LOGD(" onListItemClick_ Notify_ListView  !!!\n");
}

static bool onButtonClick_Button18(ZKButton *pButton) {
    LOGD(" ButtonClick Button18 !!!\n");
    return false;
}

static bool onButtonClick_AJ_confirm_Button(ZKButton *pButton) {
    LOGD(" ButtonClick AJ_confirm_Button !!!\n");
    return false;
}

static bool onButtonClick_Button94(ZKButton *pButton) {
    LOGD(" ButtonClick Button94 !!!\n");
    return false;
}

static bool onButtonClick_Button93(ZKButton *pButton) {
    LOGD(" ButtonClick Button93 !!!\n");
    return false;
}

static bool onButtonClick_Button92(ZKButton *pButton) {
    LOGD(" ButtonClick Button92 !!!\n");
    return false;
}

static bool onButtonClick_Button91(ZKButton *pButton) {
    LOGD(" ButtonClick Button91 !!!\n");
    return false;
}

static bool onButtonClick_Button90(ZKButton *pButton) {
    LOGD(" ButtonClick Button90 !!!\n");
    return false;
}

static bool onButtonClick_Button89(ZKButton *pButton) {
    LOGD(" ButtonClick Button89 !!!\n");
    return false;
}

static bool onButtonClick_Button88(ZKButton *pButton) {
    LOGD(" ButtonClick Button88 !!!\n");
    return false;
}

static bool onButtonClick_Button87(ZKButton *pButton) {
    LOGD(" ButtonClick Button87 !!!\n");
    return false;
}

static bool onButtonClick_Button86(ZKButton *pButton) {
    LOGD(" ButtonClick Button86 !!!\n");
    return false;
}

static bool onButtonClick_Button85(ZKButton *pButton) {
    LOGD(" ButtonClick Button85 !!!\n");
    return false;
}

static bool onButtonClick_Button84(ZKButton *pButton) {
    LOGD(" ButtonClick Button84 !!!\n");
    return false;
}

static bool onButtonClick_Button96(ZKButton *pButton) {
    LOGD(" ButtonClick Button96 !!!\n");
    return false;
}

static bool onButtonClick_ButtonjpL(ZKButton *pButton) {
    LOGD(" ButtonClick ButtonjpL !!!\n");
    return false;
}

static bool onButtonClick_Buttonjpd(ZKButton *pButton) {
    LOGD(" ButtonClick Buttonjpd !!!\n");
    return false;
}

static bool onButtonClick_Button28(ZKButton *pButton) {
    LOGD(" ButtonClick Button28 !!!\n");
    return false;
}

static bool onButtonClick_Button45(ZKButton *pButton) {
    LOGD(" ButtonClick Button45 !!!\n");
    return false;
}

static bool onButtonClick_Button125(ZKButton *pButton) {
    LOGD(" ButtonClick Button125 !!!\n");
    return false;
}

static bool onButtonClick_Button_0(ZKButton *pButton) {
    LOGD(" ButtonClick Button_0 !!!\n");
    return false;
}

static bool onButtonClick_Button_1(ZKButton *pButton) {
    LOGD(" ButtonClick Button_1 !!!\n");
    return false;
}

static bool onButtonClick_Button_2(ZKButton *pButton) {
    LOGD(" ButtonClick Button_2 !!!\n");
    return false;
}

static bool onButtonClick_Button_3(ZKButton *pButton) {
    LOGD(" ButtonClick Button_3 !!!\n");
    return false;
}

static bool onButtonClick_Button_4(ZKButton *pButton) {
    LOGD(" ButtonClick Button_4 !!!\n");
    return false;
}

static bool onButtonClick_Button_5(ZKButton *pButton) {
    LOGD(" ButtonClick Button_5 !!!\n");
    return false;
}

static bool onButtonClick_Button_6(ZKButton *pButton) {
    LOGD(" ButtonClick Button_6 !!!\n");
    return false;
}

static bool onButtonClick_Button_7(ZKButton *pButton) {
    LOGD(" ButtonClick Button_7 !!!\n");
    return false;
}

static bool onButtonClick_Button_8(ZKButton *pButton) {
    LOGD(" ButtonClick Button_8 !!!\n");
    return false;
}

static bool onButtonClick_Button_9(ZKButton *pButton) {
    LOGD(" ButtonClick Button_9 !!!\n");
    return false;
}

static bool onButtonClick_Button137(ZKButton *pButton) {
    LOGD(" ButtonClick Button137 !!!\n");
    return false;
}

static bool onButtonClick_Button138(ZKButton *pButton) {
    LOGD(" ButtonClick Button138 !!!\n");
    return false;
}

static bool onButtonClick_Button_a(ZKButton *pButton) {
    LOGD(" ButtonClick Button_a !!!\n");
    return false;
}

static bool onButtonClick_Button_b(ZKButton *pButton) {
    LOGD(" ButtonClick Button_b !!!\n");
    return false;
}

static bool onButtonClick_Button_c(ZKButton *pButton) {
    LOGD(" ButtonClick Button_c !!!\n");
    return false;
}

static bool onButtonClick_Button_d(ZKButton *pButton) {
    LOGD(" ButtonClick Button_d !!!\n");
    return false;
}

static bool onButtonClick_Button_e(ZKButton *pButton) {
    LOGD(" ButtonClick Button_e !!!\n");
    return false;
}

static bool onButtonClick_Button_f(ZKButton *pButton) {
    LOGD(" ButtonClick Button_f !!!\n");
    return false;
}

static bool onButtonClick_Button_g(ZKButton *pButton) {
    LOGD(" ButtonClick Button_g !!!\n");
    return false;
}

static bool onButtonClick_Button_h(ZKButton *pButton) {
    LOGD(" ButtonClick Button_h !!!\n");
    return false;
}

static bool onButtonClick_Button_i(ZKButton *pButton) {
    LOGD(" ButtonClick Button_i !!!\n");
    return false;
}

static bool onButtonClick_Button_j(ZKButton *pButton) {
    LOGD(" ButtonClick Button_j !!!\n");
    return false;
}

static bool onButtonClick_Button_k(ZKButton *pButton) {
    LOGD(" ButtonClick Button_k !!!\n");
    return false;
}

static bool onButtonClick_Button_l(ZKButton *pButton) {
    LOGD(" ButtonClick Button_l !!!\n");
    return false;
}

static bool onButtonClick_Button_m(ZKButton *pButton) {
    LOGD(" ButtonClick Button_m !!!\n");
    return false;
}

static bool onButtonClick_Button_n(ZKButton *pButton) {
    LOGD(" ButtonClick Button_n !!!\n");
    return false;
}

static bool onButtonClick_Button_o(ZKButton *pButton) {
    LOGD(" ButtonClick Button_o !!!\n");
    return false;
}

static bool onButtonClick_Button_p(ZKButton *pButton) {
    LOGD(" ButtonClick Button_p !!!\n");
    return false;
}

static bool onButtonClick_Button_q(ZKButton *pButton) {
    LOGD(" ButtonClick Button_q !!!\n");
    return false;
}

static bool onButtonClick_Button_r(ZKButton *pButton) {
    LOGD(" ButtonClick Button_r !!!\n");
    return false;
}

static bool onButtonClick_Button_s(ZKButton *pButton) {
    LOGD(" ButtonClick Button_s !!!\n");
    return false;
}

static bool onButtonClick_Button_t(ZKButton *pButton) {
    LOGD(" ButtonClick Button_t !!!\n");
    return false;
}

static bool onButtonClick_Button_u(ZKButton *pButton) {
    LOGD(" ButtonClick Button_u !!!\n");
    return false;
}

static bool onButtonClick_Button_v(ZKButton *pButton) {
    LOGD(" ButtonClick Button_v !!!\n");
    return false;
}

static bool onButtonClick_Button_w(ZKButton *pButton) {
    LOGD(" ButtonClick Button_w !!!\n");
    return false;
}

static bool onButtonClick_Button_x(ZKButton *pButton) {
    LOGD(" ButtonClick Button_x !!!\n");
    return false;
}

static bool onButtonClick_Button_y(ZKButton *pButton) {
    LOGD(" ButtonClick Button_y !!!\n");
    return false;
}

static bool onButtonClick_Button_z(ZKButton *pButton) {
    LOGD(" ButtonClick Button_z !!!\n");
    return false;
}

static bool onButtonClick_Button165(ZKButton *pButton) {
    LOGD(" ButtonClick Button165 !!!\n");
    return false;
}

static bool onButtonClick_Button166(ZKButton *pButton) {
    LOGD(" ButtonClick Button166 !!!\n");
    return false;
}

static bool onButtonClick_Button167(ZKButton *pButton) {
    LOGD(" ButtonClick Button167 !!!\n");
    return false;
}

static bool onButtonClick_Button168(ZKButton *pButton) {
    LOGD(" ButtonClick Button168 !!!\n");
    return false;
}

static bool onButtonClick_Button46(ZKButton *pButton) {
    LOGD(" ButtonClick Button46 !!!\n");
    return false;
}

static bool onButtonClick_Button47(ZKButton *pButton) {
    LOGD(" ButtonClick Button47 !!!\n");
    return false;
}

static bool onButtonClick_Button48(ZKButton *pButton) {
    LOGD(" ButtonClick Button48 !!!\n");
    return false;
}

static bool onButtonClick_Button49(ZKButton *pButton) {
    LOGD(" ButtonClick Button49 !!!\n");
    return false;
}

static bool onButtonClick_Button51(ZKButton *pButton) {
    LOGD(" ButtonClick Button51 !!!\n");
    return false;
}

static bool onButtonClick_Button52(ZKButton *pButton) {
    LOGD(" ButtonClick Button52 !!!\n");
    return false;
}

static bool onButtonClick_Button53(ZKButton *pButton) {
    LOGD(" ButtonClick Button53 !!!\n");
    return false;
}

static bool onButtonClick_Button54(ZKButton *pButton) {
    LOGD(" ButtonClick Button54 !!!\n");
    return false;
}

static bool onButtonClick_Button60(ZKButton *pButton) {
    LOGD(" ButtonClick Button60 !!!\n");
    return false;
}

static bool onButtonClick_Button_(ZKButton *pButton) {
    LOGD(" ButtonClick Button_ !!!\n");
    return false;
}

static bool onButtonClick_Button_print_(ZKButton *pButton) {
    LOGD(" ButtonClick Button_print_ !!!\n");
    return false;
}
