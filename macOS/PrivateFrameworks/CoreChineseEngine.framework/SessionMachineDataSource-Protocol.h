//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreChineseEngine/NSObject-Protocol.h>

@class NSMutableArray, TIMecabraEnvironment;
@protocol IMKTextDocument;

@protocol SessionMachineDataSource <NSObject>
- (NSMutableArray *)candidatesForState:(Class)arg1;
- (unsigned long long)mecabraAnalysisOptionsForState:(Class)arg1;
- (TIMecabraEnvironment *)mecabraEnvironmentForState:(Class)arg1;
- (id <IMKTextDocument>)outputTextDocumentForState:(Class)arg1;
@end

