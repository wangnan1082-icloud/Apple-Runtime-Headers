//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject
{
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}

- (void).cxx_destruct;
- (void)applyProcessorsWithSheet:(id)arg1;
- (void)markObject:(id)arg1 processor:(Class)arg2;
- (void)removeAllObjects;
- (void)removeProcessorClass:(Class)arg1;
- (_Bool)hasProcessors;
- (void)addProcessorClass:(Class)arg1;
- (id)initWithWorkbook:(id)arg1;

@end

