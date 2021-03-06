#ifndef _ANDROIDINTERFACE_H
#define _ANDROIDINTERFACE_H

#define CLICK_ADVIEW_NOTI_NAME "CLICK_AD_VIEW_NOTI"

#include <string>


#ifdef ANDROID
#include <cstddef>
#include <jni.h>
#ifdef __cplusplus
extern "C" {
#endif

	JNIEXPORT void JNICALL Java_com_zfteam_RMRunner_RMRunner_initJVM(JNIEnv *env, jclass);

#ifdef __cplusplus
}
#endif
#endif

extern int g_clickad_flag;

void set_adview_visible(int showflag);
void share_to_freinds();
void exit_game();
std::string get_rom_path();

#endif
