//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/NSCopying-Protocol.h>

@interface PAImageRequestServiceInvalidationKey : NSObject <NSCopying>
{
    id _address;
    unsigned short _imageStyle;
    unsigned long long _versionId;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVersionAddress:(id)arg1 imageStyle:(unsigned short)arg2;
- (id)initWithVersion:(id)arg1 imageStyle:(unsigned short)arg2;

@end

