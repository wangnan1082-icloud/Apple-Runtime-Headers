//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface SFSafariPageProperties : NSObject <NSSecureCoding>
{
    BOOL _usesPrivateBrowsing;
    BOOL _active;
    NSURL *_url;
    NSString *_title;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) BOOL usesPrivateBrowsing; // @synthesize usesPrivateBrowsing=_usesPrivateBrowsing;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
