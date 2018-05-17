//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_nw_socks5_connection.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_nw_connection>, NSString;

@interface NWConcrete_nw_socks5_connection : NSObject <OS_nw_socks5_connection>
{
    unsigned long long sc_id;
    NWConcrete_nw_socks5_connection *sc_internally_retained_object;
    NSObject<OS_nw_connection> *sc_in_connection;
    NSObject<OS_dispatch_queue> *sc_queue;
    CDUnknownBlockType sc_cancel;
    unsigned char sc_state;
    unsigned char sc_out_address_type;
    union {
        char *byte_pointer;
        struct in_addr *ipv4_addr;
        struct in6_addr *ipv6_addr;
        char *domain;
    } sc_out_address;
    unsigned short sc_shoes_request_length_hbo;
    unsigned char sc_out_address_domain_length;
    NSObject<OS_nw_connection> *sc_out_connection;
    unsigned int sc_out_connection_failed_or_sent_write_close:1;
    unsigned int sc_in_connection_failed_or_sent_write_close:1;
    unsigned int sc_out_disable_proxy:1;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 shoes:(_Bool)arg3 disableProxy:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
