//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_nw_protocol_options.h"

@class NSObject<OS_xpc_object>, NSString, NWConcrete_nw_protocol_definition;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_options : NSObject <OS_nw_protocol_options>
{
    NWConcrete_nw_protocol_definition *definition;
    struct nw_protocol *protocol_handle;
    NSObject<OS_xpc_object> *legacy_parameters;
    char *log_id_str;
    void *handle;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)initWithDefinition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
