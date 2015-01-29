/* Code automatically generated by C4 DP library
 * Do not attempt to edit this code: it is spagetti.
 *
 * Model: protein2dna:local
 */

 /* ---< START >--- */

#include "ungapped.h"
#include "submat.h"
#include "affine.h"

/* Exhaustive Viterbi DP implementation. */

#include "viterbi.h"

/* Viterbi model:
 * [optimal_58_protein2dna_58_local_32_find_32_region]
 *
 * max query advance: 1
 * max target advance: 3
 *
 * scope [anywhere]->[anywhere]
 */

/* Implementing [4] explicit rows */
C4_Score optimal_58_protein2dna_58_local_32_find_32_region(C4_Model *model, Region *region,               Viterbi_Data *vd, SubOpt_Index *soi,           gpointer user_data){
register C4_Score score = C4_IMPOSSIBLY_LOW_SCORE;
register gint i, j = 0;
register C4_Score ***prev_row_0 = vd->vr->score_matrix[0];
register C4_Score ***prev_row_1 = vd->vr->score_matrix[1];
register C4_Score ***prev_row_2 = vd->vr->score_matrix[2];
register C4_Score ***prev_row_3 = vd->vr->score_matrix[3];
register C4_Score ***swap_row, *src, *dst, t;
register gboolean *state_is_set
 = g_new(gboolean, 6);
register gboolean end_is_set = FALSE;
register Ungapped_Data *ud = (Ungapped_Data*)user_data;
register Affine_Data *ad = (Affine_Data*)user_data;
register Frameshift_Data *fd = ud->frameshift_data;
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
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift close 0 p2d] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
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
/* transition [match to insert] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->codon_gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->codon_gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift close 0 p2d] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [frameshift open 1 p2d] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift close 0 p2d] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
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
/* transition [frameshift open 1 p2d] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to insert] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->codon_gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->codon_gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift close 0 p2d] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [frameshift open 2 p2d] */
src = prev_row_2[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift open 1 p2d] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift close 0 p2d] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
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
/* CELL [2,1] */
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
/* transition [frameshift open 2 p2d] */
src = prev_row_2[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift open 1 p2d] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to insert] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->codon_gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->codon_gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift close 0 p2d] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [frameshift close 3 p2d] */
src = prev_row_3[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift open 2 p2d] */
src = prev_row_2[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift open 1 p2d] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to delete] */
src = prev_row_3[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->codon_gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete] */
src = prev_row_3[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->codon_gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift close 0 p2d] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
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
/* CELL [3,1] */
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
/* transition [frameshift close 3 p2d] */
src = prev_row_3[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift open 2 p2d] */
src = prev_row_2[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift open 1 p2d] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][5];
t = (fd->fas->frameshift_penalty);
t += src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(!(soi && SubOpt_Index_is_blocked_fast(soi, i))){
/* transition [match] */
src = prev_row_3[i-1][2];
dst = prev_row_0[i][2];
t = Submat_lookup(ud->mas->protein_submat,
              Sequence_get_symbol(ud->query, region->query_start+i-1),
              Translate_base(ud->mas->translate,
                  Sequence_get_symbol(ud->target, region->target_start+j-3),
                  Sequence_get_symbol(ud->target, region->target_start+j-3+1),
                  Sequence_get_symbol(ud->target, region->target_start+j-3+2)))
;
t += src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
}
/* transition [match to insert] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->codon_gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to delete] */
src = prev_row_3[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->codon_gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->codon_gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete] */
src = prev_row_3[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->codon_gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [insert to match] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [delete to match] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [start to match] */
src = prev_row_0[i-0][0];
dst = prev_row_0[i][2];
t = 0;
if(state_is_set[2]){
if(dst[0] < t){
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
src[vd->vr->region_start_query_id] = i-0;
src[vd->vr->region_start_target_id] = j-0;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [frameshift close 0 p2d] */
src = prev_row_0[i-0][5];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
/* transition [match to end] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
} else {
state_is_set[1] = TRUE;
dst[0] = t;
dst[1] = src[1];
dst[2] = src[2];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
vd->curr_query_end = i;
vd->curr_target_end = j;
vd->curr_query_start = prev_row_0[i][1][vd->vr->region_start_query_id];
vd->curr_target_start = prev_row_0[i][1][vd->vr->region_start_target_id];
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
vd->alignment_region->query_start = vd->curr_query_start + region->query_start;
vd->alignment_region->target_start = vd->curr_target_start + region->target_start;
vd->alignment_region->query_length = vd->curr_query_end - vd->curr_query_start;
vd->alignment_region->target_length = vd->curr_target_end - vd->curr_target_start;
g_free(state_is_set);
return score;
}

/* ---< END >--- */

