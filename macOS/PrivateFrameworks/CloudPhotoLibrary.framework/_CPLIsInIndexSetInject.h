//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PQLInjecting.h"

@class NSData, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _CPLIsInIndexSetInject : NSObject <PQLInjecting>
{
    NSData *_sql;
    id _injection;
    id _keepAlive;
    unsigned long long _onlyIndex;
    NSIndexSet *_indexSet;
}

@property(readonly, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)bindValuesToKeepAlive;
@property(readonly, nonatomic) NSData *sql;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
- (id)initWithInjection:(id)arg1 indexSet:(id)arg2 exclude:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
