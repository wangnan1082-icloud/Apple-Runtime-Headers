//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAnimParameterSavedGroup, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimParameterGroup : NSObject
{
    NSString *_name;
    KNAnimParameterSavedGroup *_savedGroup;
    NSString *_fileName;
}

+ (id)easeOutPath;
+ (id)easeInPath;
+ (id)easeInEaseOutPath;
+ (id)linearPath;
+ (id)mediaTimingFunctionForPath:(id)arg1 reversed:(_Bool)arg2;
+ (void)p_loadAllParametersIfNecessary;
+ (id)parameterGroupForName:(id)arg1;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) KNAnimParameterSavedGroup *savedGroup; // @synthesize savedGroup=_savedGroup;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)p_loadParameters;
- (id)initWithFileName:(id)arg1;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1 reversed:(_Bool)arg2;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1;
- (id)pathForAnimationCurve:(id)arg1;
- (double)doubleForAnimationCurve:(id)arg1 atPercent:(double)arg2;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;

@end
