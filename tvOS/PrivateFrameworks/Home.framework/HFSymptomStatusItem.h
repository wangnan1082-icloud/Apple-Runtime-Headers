//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFStatusItem.h>

@class HMSymptom;

@interface HFSymptomStatusItem : HFStatusItem
{
    HMSymptom *_symptom;
}

@property(readonly, nonatomic) HMSymptom *symptom; // @synthesize symptom=_symptom;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
