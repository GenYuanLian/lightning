/* This file was generated by generate-wire.py */
/* Do not modify this file! Modify the _csv file it was generated from. */
#ifndef LIGHTNING_DEVTOOLS_GEN_PRINT_WIRE_H
#define LIGHTNING_DEVTOOLS_GEN_PRINT_WIRE_H
#include <ccan/tal/tal.h>
#include <devtools/print_wire.h>


void print_message(const u8 *msg);

void printwire_init(const u8 *cursor);

void printwire_error(const u8 *cursor);

void printwire_ping(const u8 *cursor);

void printwire_pong(const u8 *cursor);

void printwire_open_channel(const u8 *cursor);

void printwire_accept_channel(const u8 *cursor);

void printwire_funding_created(const u8 *cursor);

void printwire_funding_signed(const u8 *cursor);

void printwire_funding_locked(const u8 *cursor);

void printwire_shutdown(const u8 *cursor);

void printwire_closing_signed(const u8 *cursor);

void printwire_update_add_htlc(const u8 *cursor);

void printwire_update_fulfill_htlc(const u8 *cursor);

void printwire_update_fail_htlc(const u8 *cursor);

void printwire_update_fail_malformed_htlc(const u8 *cursor);

void printwire_commitment_signed(const u8 *cursor);

void printwire_revoke_and_ack(const u8 *cursor);

void printwire_update_fee(const u8 *cursor);

void printwire_channel_reestablish(const u8 *cursor);

void printwire_announcement_signatures(const u8 *cursor);

void printwire_channel_announcement(const u8 *cursor);

void printwire_node_announcement(const u8 *cursor);

void printwire_channel_update(const u8 *cursor);

void printwire_query_short_channel_ids(const u8 *cursor);

void printwire_reply_short_channel_ids_end(const u8 *cursor);

void printwire_query_channel_range(const u8 *cursor);

void printwire_reply_channel_range(const u8 *cursor);

void printwire_gossip_timestamp_filter(const u8 *cursor);

void printwire_open_channel_option_upfront_shutdown_script(const u8 *cursor);

void printwire_accept_channel_option_upfront_shutdown_script(const u8 *cursor);

void printwire_channel_reestablish_option_data_loss_protect(const u8 *cursor);

#endif /* LIGHTNING_DEVTOOLS_GEN_PRINT_WIRE_H */

