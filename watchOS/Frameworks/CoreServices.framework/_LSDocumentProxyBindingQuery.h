//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/_LSQuery.h>

@class LSDocumentProxy, NSString;

__attribute__((visibility("hidden")))
@interface _LSDocumentProxyBindingQuery : _LSQuery
{
    _Bool _withTypeDeclarer;
    unsigned char _style;
    LSDocumentProxy *_documentProxy;
    NSString *_handlerRank;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *handlerRank; // @synthesize handlerRank=_handlerRank;
@property(readonly, nonatomic) unsigned char style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool withTypeDeclarer; // @synthesize withTypeDeclarer=_withTypeDeclarer;
@property(readonly, retain, nonatomic) LSDocumentProxy *documentProxy; // @synthesize documentProxy=_documentProxy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (_Bool)_shouldCacheResolvedResults;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (int)calculatePriorityForApp:(id)arg1 cloudOwner:(id)arg2 preferredHandler:(id)arg3 typeIsWildcard:(_Bool)arg4;
- (void)dealloc;
- (id)initWithDocumentProxy:(id)arg1 withTypeDeclarer:(_Bool)arg2 style:(unsigned char)arg3 handlerRank:(id)arg4;

@end

