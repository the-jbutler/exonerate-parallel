/* Code automatically generated by C4 DP library
 * Do not attempt to edit this code: it is spagetti.
 *
 * Model: NER:affine:local:protein2protein
 */

 /* ---< START >--- */

#include "ungapped.h"
#include "submat.h"
#include "affine.h"
#include "ner.h"

/* Exhaustive Viterbi DP implementation. */

#include "viterbi.h"

/* Viterbi model:
 * [optimal_58_NER_58_affine_58_local_58_protein2protein_32_find_32_path]
 *
 * max query advance: 1
 * max target advance: 1
 *
 * scope [anywhere]->[anywhere]
 */

/* Implementing [2] explicit rows */
C4_Score optimal_58_NER_58_affine_58_local_58_protein2protein_32_find_32_path(C4_Model *model, Region *region,               Viterbi_Data *vd, SubOpt_Index *soi,           gpointer user_data){
register C4_Score score = C4_IMPOSSIBLY_LOW_SCORE;
register gint i, j = 0;
register C4_Score ***prev_row_0 = vd->vr->score_matrix[0];
register C4_Score ***prev_row_1 = vd->vr->score_matrix[1];
register C4_Score ***swap_row, *src, *dst, t;
register C4_Transition *transition;
register gboolean *state_is_set
 = g_new(gboolean, 6);
register gboolean end_is_set = FALSE;
register Ungapped_Data *ud = (Ungapped_Data*)user_data;
register Affine_Data *ad = (Affine_Data*)user_data;
register NER_Data *nd = (NER_Data*)user_data;
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[8];
t = src[0];
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
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[9];
t = src[0];
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
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[10];
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
/* transition [ner to match] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[11];
t = src[0];
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
transition = model->transition_list->pdata[12];
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
/* last cell [1] */
do {
/* CELL [0,1] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [ner loop insert] */
src = prev_row_0[i-1][5];
dst = prev_row_0[i][5];
transition = model->transition_list->pdata[1];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
/* transition [match to insert] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
transition = model->transition_list->pdata[4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][3] = transition;
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
vd->traceback[i][j][3] = transition;
}
/* transition [insert] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
transition = model->transition_list->pdata[6];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][3] = transition;
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
vd->traceback[i][j][3] = transition;
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[8];
t = src[0];
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
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[9];
t = src[0];
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
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[10];
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
/* transition [ner to match] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[11];
t = src[0];
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
transition = model->transition_list->pdata[12];
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
/* last row [1] */
do {
nth_row:
j++;
SubOpt_Index_set_row(soi, j);
swap_row = prev_row_1;
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [ner loop delete] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
transition = model->transition_list->pdata[0];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
/* transition [match to delete] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
transition = model->transition_list->pdata[5];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][4] = transition;
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
vd->traceback[i][j][4] = transition;
}
/* transition [delete] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
transition = model->transition_list->pdata[7];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][4] = transition;
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
vd->traceback[i][j][4] = transition;
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[8];
t = src[0];
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
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[9];
t = src[0];
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
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[10];
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
/* transition [ner to match] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[11];
t = src[0];
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
transition = model->transition_list->pdata[12];
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
/* last cell [1] */
do {
/* CELL [1,1] */
i++;
prev_row_0[i][0][0] = -987654321;
prev_row_0[i][1][0] = -987654321;
prev_row_0[i][2][0] = -987654321;
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [ner loop delete] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
transition = model->transition_list->pdata[0];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
/* transition [ner loop insert] */
src = prev_row_0[i-1][5];
dst = prev_row_0[i][5];
transition = model->transition_list->pdata[1];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
/* transition [match to ner] */
src = prev_row_1[i-1][2];
dst = prev_row_0[i][5];
transition = model->transition_list->pdata[2];
t = (nd->nas->ner_open_penalty)
;
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
vd->traceback[i][j][5] = transition;
}
if(!(soi && SubOpt_Index_is_blocked_fast(soi, i))){
/* transition [match] */
src = prev_row_1[i-1][2];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[3];
t = Submat_lookup(ud->mas->protein_submat,
     Sequence_get_symbol(ud->query, region->query_start+i-1),
     Sequence_get_symbol(ud->target, region->target_start+j-1));
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
/* transition [match to insert] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
transition = model->transition_list->pdata[4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][3] = transition;
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
vd->traceback[i][j][3] = transition;
}
/* transition [match to delete] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
transition = model->transition_list->pdata[5];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][4] = transition;
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
vd->traceback[i][j][4] = transition;
}
/* transition [insert] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
transition = model->transition_list->pdata[6];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][3] = transition;
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
vd->traceback[i][j][3] = transition;
}
/* transition [delete] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
transition = model->transition_list->pdata[7];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
vd->traceback[i][j][4] = transition;
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
vd->traceback[i][j][4] = transition;
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[8];
t = src[0];
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
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[9];
t = src[0];
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
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[10];
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
/* transition [ner to match] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
transition = model->transition_list->pdata[11];
t = src[0];
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
transition = model->transition_list->pdata[12];
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

