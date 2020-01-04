/*
 * Copyright (c) 2015-2016 ARM Limited. All Rights Reserved.
 */

#include "coap_message_handler_stub.h"

coap_message_handler_stub_def coap_message_handler_stub;

coap_msg_handler_t *coap_message_handler_init(void *(*used_malloc_func_ptr)(uint16_t), void (*used_free_func_ptr)(void *),
                                  uint8_t (*used_tx_callback_ptr)(uint8_t *, uint16_t, sn_nsdl_addr_s *, void *))
{
    if(coap_message_handler_stub.coap_ptr){
        coap_message_handler_stub.coap_ptr->sn_coap_service_malloc = used_malloc_func_ptr;
        coap_message_handler_stub.coap_ptr->sn_coap_service_free = used_free_func_ptr;
        coap_message_handler_stub.coap_ptr->sn_coap_tx_callback = used_tx_callback_ptr;
    }
    return coap_message_handler_stub.coap_ptr;
}

void transaction_delete(coap_transaction_t *this)
{

}

void transactions_delete_all(uint8_t *address_ptr, uint16_t port)
{

}
int8_t coap_message_handler_destroy(coap_msg_handler_t *handle)
{
    return coap_message_handler_stub.int8_value;
}

coap_transaction_t *coap_message_handler_transaction_valid(coap_transaction_t *tr_ptr)
{
    return coap_message_handler_stub.coap_ptr;
}

coap_transaction_t *coap_message_handler_find_transaction(uint8_t *address_ptr, uint16_t port)
{
    return coap_message_handler_stub.coap_tx_ptr;
}

int16_t coap_message_handler_coap_msg_process(coap_msg_handler_t *handle, int8_t socket_id, const uint8_t source_addr_ptr[static 16], uint16_t port, const uint8_t dst_addr_ptr[static 16],
                                      uint8_t *data_ptr, uint16_t data_len, int16_t (cb)(int8_t, sn_coap_hdr_s *, coap_transaction_t *))
{
    coap_message_handler_stub.cb = cb;
    return coap_message_handler_stub.int16_value;
}

uint16_t coap_message_handler_request_send(coap_msg_handler_t *handle, int8_t service_id, uint8_t options, 
    const uint8_t destination_addr[static 16], uint16_t destination_port, sn_coap_msg_type_e msg_type, sn_coap_msg_code_e msg_code, 
    const char *uri, sn_coap_content_format_e cont_type, const uint8_t *payload_ptr, uint16_t payload_len, coap_message_handler_response_recv *request_response_cb)
{
    return coap_message_handler_stub.uint16_value;
}

int8_t coap_message_handler_response_send(coap_msg_handler_t *handle, int8_t service_id, uint8_t options, sn_coap_hdr_s *request_ptr,  sn_coap_msg_code_e message_code,sn_coap_content_format_e content_type, const uint8_t *payload_ptr, uint16_t payload_len)
{
    return coap_message_handler_stub.int8_value;
}

int8_t coap_message_handler_exec(coap_msg_handler_t *handle, uint32_t current_time)
{
    return coap_message_handler_stub.int8_value;
}

