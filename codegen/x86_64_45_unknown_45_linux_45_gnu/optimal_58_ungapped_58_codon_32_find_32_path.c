/* Code automatically generated by C4 DP library
 * Do not attempt to edit this code: it is spagetti.
 *
 * Model: ungapped:codon
 */

 /* ---< START >--- */

#include "ungapped.h"
#include "submat.h"

/* Exhaustive Viterbi DP implementation. */

#include "viterbi.h"

/* Viterbi model:
 * [optimal_58_ungapped_58_codon_32_find_32_path]
 *
 * max query advance: 3
 * max target advance: 3
 *
 * scope [anywhere]->[anywhere]
 */

/* Implementing [4] explicit rows */
C4_Score optimal_58_ungapped_58_codon_32_find_32_path(C4_Model *model, Region *region,               Viterbi_Data *vd, SubOpt_Index *soi,           gpointer user_data){
register C4_Score score = C4_IMPOSSIBLY_LOW_SCORE;
register gint i, j = 0;
register C4_Score ***prev_row_0 = vd->vr->score_matrix[0];
register C4_Score ***prev_row_1 = vd->vr->score_matrix[1];
register C4_Score ***prev_row_2 = vd->vr->score_matrix[2];
register C4_Score ***prev_row_3 = vd->vr->score_matrix[3];
register C4_Score ***swap_row, *src, *dst, t;
register C4_Transition *transition;
register gboolean *state_is_set
 = g_new(gboolean, 3);
register gboolean end_is_set = FALSE;
register Ungapped_Data *ud = (Ungapped_Data*)user_data;
/* Transition calc init */
SubOpt_Index_set_row(soi, 0);
/* explicit row [0] */
/* start block */
i = -1;
/* explicit cell [0] */
/* CELL [0,0] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto row_1;
}
}
/* explicit cell [1] */
/* CELL [0,1] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto row_1;
}
}
/* last cell [2] */
do {
/* CELL [0,2] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto row_1;
}
}
} while(TRUE);
/* explicit row [1] */
row_1:
j++;
SubOpt_Index_set_row(soi, j);
swap_row = prev_row_3;
prev_row_3 = prev_row_2;
prev_row_2 = prev_row_1;
prev_row_1 = prev_row_0;
prev_row_0 = swap_row;
/* start block */
i = -1;
/* explicit cell [0] */
/* CELL [1,0] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto row_2;
}
}
/* explicit cell [1] */
/* CELL [1,1] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto row_2;
}
}
/* last cell [2] */
do {
/* CELL [1,2] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto row_2;
}
}
} while(TRUE);
/* explicit row [2] */
row_2:
j++;
SubOpt_Index_set_row(soi, j);
swap_row = prev_row_3;
prev_row_3 = prev_row_2;
prev_row_2 = prev_row_1;
prev_row_1 = prev_row_0;
prev_row_0 = swap_row;
/* start block */
i = -1;
/* explicit cell [0] */
/* CELL [2,0] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto nth_row;
}
}
/* explicit cell [1] */
/* CELL [2,1] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto nth_row;
}
}
/* last cell [2] */
do {
/* CELL [2,2] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto nth_row;
}
}
} while(TRUE);
/* last row [3] */
do {
nth_row:
j++;
SubOpt_Index_set_row(soi, j);
swap_row = prev_row_3;
prev_row_3 = prev_row_2;
prev_row_2 = prev_row_1;
prev_row_1 = prev_row_0;
prev_row_0 = swap_row;
/* start block */
i = -1;
/* explicit cell [0] */
/* CELL [3,0] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto nth_row;
}
}
/* explicit cell [1] */
/* CELL [3,1] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto nth_row;
}
}
/* explicit cell [2] */
/* CELL [3,2] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto nth_row;
}
}
/* last cell [3] */
do {
/* CELL [3,3] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
if(!(soi && SubOpt_Index_is_blocked_fast(soi, i))){
/* transition [match] */
src = prev_row_3[i-3][2];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[0];
t = ((ud->query->annotation)
 && (ud->query->alphabet->type == Alphabet_Type_DNA)
 && (  ((region->query_start+i-3) < ud->query->annotation->cds_start)
    || ((region->query_start+i-3) >= (ud->query->annotation->cds_start
               +ud->query->annotation->cds_length))
    || (((region->query_start+i-3) % 3) != (ud->query->annotation->cds_start % 3))))
?MATCH_IMPOSSIBLY_LOW_SCORE
:Submat_lookup(ud->mas->protein_submat,
               Translate_base(ud->mas->translate, 
                  Sequence_get_symbol(ud->query, region->query_start+i-3),
                  Sequence_get_symbol(ud->query, region->query_start+i-3+1),
                  Sequence_get_symbol(ud->query, region->query_start+i-3+2)),
               Translate_base(ud->mas->translate, 
                  Sequence_get_symbol(ud->target, region->target_start+j-3),
                  Sequence_get_symbol(ud->target, region->target_start+j-3+1),
                  Sequence_get_symbol(ud->target, region->target_start+j-3+2)))
;
t += src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[1];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
vd->traceback[i][j][2] = transition;
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
transition = model->transition_list->pdata[2];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
vd->traceback[i][j][1] = transition;
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
}
}
if(j == region->target_length){
if(i == region->query_length){
goto end_of_dp;
}
} else {
if(i == region->query_length){
goto nth_row;
}
}
} while(TRUE);
} while(TRUE);
end_of_dp:
/* Transition calc exit */
g_free(state_is_set);
return score;
}

/* ---< END >--- */

