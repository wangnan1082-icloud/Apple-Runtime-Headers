//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface CRKBook : NSObject <NSSecureCoding>
{
    BOOL _hasChapters;
    NSString *_title;
    NSString *_author;
    NSString *_path;
    NSData *_image;
    NSURL *_webURL;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL hasChapters; // @synthesize hasChapters=_hasChapters;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSData *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)imageDescription;
- (id)description;
- (id)init;

@end

