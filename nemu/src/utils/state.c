/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <utils.h>
#include <debug.h>
NEMUState nemu_state = { .state = NEMU_RUNNING };

int is_exit_status_bad() {
  int good = ((nemu_state.state == NEMU_END && nemu_state.halt_ret == 0) || (nemu_state.state == NEMU_QUIT));
    Log("QUIT,%d",NEMU_QUIT);
    Log("STOP,%d",NEMU_STOP);
    Log("END,%d",NEMU_END);
    Log("NOW_STATE,%d",nemu_state.state);
  return !good;
  
}
