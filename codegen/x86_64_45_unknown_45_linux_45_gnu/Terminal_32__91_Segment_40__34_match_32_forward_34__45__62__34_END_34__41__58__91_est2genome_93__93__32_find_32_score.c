/* Code automatically generated by C4 DP library
 * Do not attempt to edit this code: it is spagetti.
 *
 * Model: Segment("match forward"->"END"):[est2genome]
 */

 /* ---< START >--- */

#include "ungapped.h"
#include "submat.h"
#include "affine.h"
#include "est2genome.h"

/* Exhaustive Viterbi DP implementation. */

#include "viterbi.h"

/* Viterbi model:
 * [Terminal_32__91_Segment_40__34_match_32_forward_34__45__62__34_END_34__41__58__91_est2genome_93__93__32_find_32_score]
 *
 * max query advance: 1
 * max target advance: 2
 *
 * scope [corner]->[anywhere]
 */

/* Implementing [4] explicit rows */
C4_Score Terminal_32__91_Segment_40__34_match_32_forward_34__45__62__34_END_34__41__58__91_est2genome_93__93__32_find_32_score(C4_Model *model, Region *region,               Viterbi_Data *vd, SubOpt_Index *soi,           gpointer user_data){
register C4_Score score = C4_IMPOSSIBLY_LOW_SCORE;
register gint i, j = 0;
register C4_Score ***prev_row_0 = vd->vr->score_matrix[0];
register C4_Score ***prev_row_1 = vd->vr->score_matrix[1];
register C4_Score ***prev_row_2 = vd->vr->score_matrix[2];
register C4_Score ***swap_row, *src, *dst, t;
register gboolean *state_is_set
 = g_new(gboolean, 6);
register gboolean end_is_set = FALSE;
register Ungapped_Data *ud = (Ungapped_Data*)user_data;
register Affine_Data *ad = (Affine_Data*)user_data;
register Intron_Data *id = ud->intron_data;
model->init_func(region, user_data);
/* Transition calc init */
Intron_ChainData_init_splice_prediction(id->target_data, ud->target, id->ias->sps,                                        SpliceType_ss5_forward,        ((id->curr_region->target_start == 0)        && (id->curr_region->target_length == ud->target->len)));;
Intron_ChainData_init_splice_prediction(id->target_data, ud->target, id->ias->sps,                                        SpliceType_ss3_forward,        ((id->curr_region->target_start == 0)        && (id->curr_region->target_length == ud->target->len)));;
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
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [insert forward] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to insert forward] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to insert forward] */
src = prev_row_0[i-1][0];
dst = prev_row_0[i][3];
t = (ad->aas->gap_open);
if(state_is_set[3]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [insert forward] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to insert forward] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
swap_row = prev_row_2;
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
/* transition [target intron loop forward] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete forward] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to delete forward] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to delete forward] */
src = prev_row_1[i-0][0];
dst = prev_row_0[i][4];
t = (ad->aas->gap_open);
if(state_is_set[4]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [target intron loop forward] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete forward] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to delete forward] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert forward] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to insert forward] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(!(soi && SubOpt_Index_is_blocked_fast(soi, i))){
/* transition [match forward] */
src = prev_row_1[i-1][2];
dst = prev_row_0[i][2];
t = ((ud->query->annotation)
&& (region->query_start+i-1 >= ud->query->annotation->cds_start)
&& (region->query_start+i-1 < (ud->query->annotation->cds_start
          +ud->query->annotation->cds_length)))
?MATCH_IMPOSSIBLY_LOW_SCORE
:Submat_lookup(ud->mas->dna_submat,
     Sequence_get_symbol(ud->query, region->query_start+i-1),
     Sequence_get_symbol(ud->target, region->target_start+j-1));
t += src[0];
if(state_is_set[2]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
}
if(!(soi && SubOpt_Index_is_blocked_fast(soi, i))){
/* transition [match forward] */
src = prev_row_1[i-1][0];
dst = prev_row_0[i][2];
t = ((ud->query->annotation)
&& (region->query_start+i-1 >= ud->query->annotation->cds_start)
&& (region->query_start+i-1 < (ud->query->annotation->cds_start
          +ud->query->annotation->cds_length)))
?MATCH_IMPOSSIBLY_LOW_SCORE
:Submat_lookup(ud->mas->dna_submat,
     Sequence_get_symbol(ud->query, region->query_start+i-1),
     Sequence_get_symbol(ud->target, region->target_start+j-1));
if(state_is_set[2]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
prev_row_0[i][3][0] = -987654321;
prev_row_0[i][4][0] = -987654321;
prev_row_0[i][5][0] = -987654321;
state_is_set[0] = FALSE;
state_is_set[1] = FALSE;
state_is_set[2] = FALSE;
state_is_set[3] = FALSE;
state_is_set[4] = FALSE;
state_is_set[5] = FALSE;
/* transition [target intron loop forward] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete forward] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to delete forward] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert forward] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to insert forward] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(!(soi && SubOpt_Index_is_blocked_fast(soi, i))){
/* transition [match forward] */
src = prev_row_1[i-1][2];
dst = prev_row_0[i][2];
t = ((ud->query->annotation)
&& (region->query_start+i-1 >= ud->query->annotation->cds_start)
&& (region->query_start+i-1 < (ud->query->annotation->cds_start
          +ud->query->annotation->cds_length)))
?MATCH_IMPOSSIBLY_LOW_SCORE
:Submat_lookup(ud->mas->dna_submat,
     Sequence_get_symbol(ud->query, region->query_start+i-1),
     Sequence_get_symbol(ud->target, region->target_start+j-1));
t += src[0];
if(state_is_set[2]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
swap_row = prev_row_2;
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
/* transition [target intron loop forward] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [intron forward to (END)] */
src = prev_row_2[i-0][5];
dst = prev_row_0[i][2];
id->target_data->curr_intron_start = (gint)src[1];
t = ((((region->target_start+j-2 - id->target_data->curr_intron_start + 2) < id->ias->min_intron)||((region->target_start+j-2 - id->target_data->curr_intron_start + 2) > id->ias->max_intron))?C4_IMPOSSIBLY_LOW_SCORE:SplicePrediction_get(id->target_data->sps->ss3_forward, region->target_start+j-2));
t += src[0];
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [(START) to intron forward] */
src = prev_row_2[i-0][2];
dst = prev_row_0[i][5];
t = (id->ias->intron_open_penalty + SplicePrediction_get(id->target_data->sps->ss5_forward, region->target_start+j-2));
t += src[0];
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[5]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete forward] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to delete forward] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
/* transition [(START) to intron forward] */
src = prev_row_2[i-0][0];
dst = prev_row_0[i][5];
t = (id->ias->intron_open_penalty + SplicePrediction_get(id->target_data->sps->ss5_forward, region->target_start+j-2));
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[5]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
/* transition [target intron loop forward] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [intron forward to (END)] */
src = prev_row_2[i-0][5];
dst = prev_row_0[i][2];
id->target_data->curr_intron_start = (gint)src[1];
t = ((((region->target_start+j-2 - id->target_data->curr_intron_start + 2) < id->ias->min_intron)||((region->target_start+j-2 - id->target_data->curr_intron_start + 2) > id->ias->max_intron))?C4_IMPOSSIBLY_LOW_SCORE:SplicePrediction_get(id->target_data->sps->ss3_forward, region->target_start+j-2));
t += src[0];
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [(START) to intron forward] */
src = prev_row_2[i-0][2];
dst = prev_row_0[i][5];
t = (id->ias->intron_open_penalty + SplicePrediction_get(id->target_data->sps->ss5_forward, region->target_start+j-2));
t += src[0];
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[5]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete forward] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to delete forward] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert forward] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to insert forward] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(!(soi && SubOpt_Index_is_blocked_fast(soi, i))){
/* transition [match forward] */
src = prev_row_1[i-1][2];
dst = prev_row_0[i][2];
t = ((ud->query->annotation)
&& (region->query_start+i-1 >= ud->query->annotation->cds_start)
&& (region->query_start+i-1 < (ud->query->annotation->cds_start
          +ud->query->annotation->cds_length)))
?MATCH_IMPOSSIBLY_LOW_SCORE
:Submat_lookup(ud->mas->dna_submat,
     Sequence_get_symbol(ud->query, region->query_start+i-1),
     Sequence_get_symbol(ud->target, region->target_start+j-1));
t += src[0];
if(state_is_set[2]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
swap_row = prev_row_2;
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
/* transition [target intron loop forward] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [intron forward to (END)] */
src = prev_row_2[i-0][5];
dst = prev_row_0[i][2];
id->target_data->curr_intron_start = (gint)src[1];
t = ((((region->target_start+j-2 - id->target_data->curr_intron_start + 2) < id->ias->min_intron)||((region->target_start+j-2 - id->target_data->curr_intron_start + 2) > id->ias->max_intron))?C4_IMPOSSIBLY_LOW_SCORE:SplicePrediction_get(id->target_data->sps->ss3_forward, region->target_start+j-2));
t += src[0];
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [(START) to intron forward] */
src = prev_row_2[i-0][2];
dst = prev_row_0[i][5];
t = (id->ias->intron_open_penalty + SplicePrediction_get(id->target_data->sps->ss5_forward, region->target_start+j-2));
t += src[0];
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[5]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete forward] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to delete forward] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
/* transition [target intron loop forward] */
src = prev_row_1[i-0][5];
dst = prev_row_0[i][5];
t = src[0];
if(state_is_set[5]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [intron forward to (END)] */
src = prev_row_2[i-0][5];
dst = prev_row_0[i][2];
id->target_data->curr_intron_start = (gint)src[1];
t = ((((region->target_start+j-2 - id->target_data->curr_intron_start + 2) < id->ias->min_intron)||((region->target_start+j-2 - id->target_data->curr_intron_start + 2) > id->ias->max_intron))?C4_IMPOSSIBLY_LOW_SCORE:SplicePrediction_get(id->target_data->sps->ss3_forward, region->target_start+j-2));
t += src[0];
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [(START) to intron forward] */
src = prev_row_2[i-0][2];
dst = prev_row_0[i][5];
t = (id->ias->intron_open_penalty + SplicePrediction_get(id->target_data->sps->ss5_forward, region->target_start+j-2));
t += src[0];
if(t < C4_IMPOSSIBLY_LOW_SCORE)
t = C4_IMPOSSIBLY_LOW_SCORE;
if(state_is_set[5]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[5] = TRUE;
src[1] = (C4_Score)(region->target_start+j-2);
dst[0] = t;
dst[1] = src[1];
}
/* transition [delete forward] */
src = prev_row_1[i-0][4];
dst = prev_row_0[i][4];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to delete forward] */
src = prev_row_1[i-0][2];
dst = prev_row_0[i][4];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[4]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[4] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert forward] */
src = prev_row_0[i-1][3];
dst = prev_row_0[i][3];
t = (ad->aas->gap_extend);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to insert forward] */
src = prev_row_0[i-1][2];
dst = prev_row_0[i][3];
t = (ad->aas->gap_open);
t += src[0];
if(state_is_set[3]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[3] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(!(soi && SubOpt_Index_is_blocked_fast(soi, i))){
/* transition [match forward] */
src = prev_row_1[i-1][2];
dst = prev_row_0[i][2];
t = ((ud->query->annotation)
&& (region->query_start+i-1 >= ud->query->annotation->cds_start)
&& (region->query_start+i-1 < (ud->query->annotation->cds_start
          +ud->query->annotation->cds_length)))
?MATCH_IMPOSSIBLY_LOW_SCORE
:Submat_lookup(ud->mas->dna_submat,
     Sequence_get_symbol(ud->query, region->query_start+i-1),
     Sequence_get_symbol(ud->target, region->target_start+j-1));
t += src[0];
if(state_is_set[2]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
src[1] = (C4_Score)(region->target_start+j-1);
dst[0] = t;
dst[1] = src[1];
}
}
/* transition [delete to match forward] */
src = prev_row_0[i-0][4];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [insert to match forward] */
src = prev_row_0[i-0][3];
dst = prev_row_0[i][2];
t = src[0];
if(state_is_set[2]){
if(dst[0] < t){
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[2] = TRUE;
dst[0] = t;
dst[1] = src[1];
}
/* transition [match to end forward] */
src = prev_row_0[i-0][2];
dst = prev_row_0[i][1];
t = src[0];
if(state_is_set[1]){
if(dst[0] < t){
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
} else {
state_is_set[1] = TRUE;
src[1] = (C4_Score)(region->target_start+j-0);
dst[0] = t;
dst[1] = src[1];
}
if(state_is_set[1]){
if(end_is_set){
if(score < prev_row_0[i][1][0]){
score = prev_row_0[i][1][0];
}
} else {
score = prev_row_0[i][1][0];
end_is_set = TRUE;
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
model->exit_func(region, user_data);
g_free(state_is_set);
return score;
}

/* ---< END >--- */

