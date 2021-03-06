//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface PADiscreteFileImageKey : NSObject <NSCopying>
{
    NSURL *_url;
    NSDictionary *_cgOptions;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSDictionary *cgOptions; // @synthesize cgOptions=_cgOptions;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithSubsampleFactor:(unsigned long long)arg1;
- (unsigned long long)subsampleFactor;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 cgOptions:(id)arg2 name:(id)arg3;

@end

