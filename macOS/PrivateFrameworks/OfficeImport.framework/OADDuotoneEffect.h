//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect
{
    OADColor *mColor1;
    OADColor *mColor2;
    int mTransferMode1;
    int mTransferMode2;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (void)setTransferMode2:(int)arg1;
- (int)transferMode2;
- (void)setTransferMode1:(int)arg1;
- (int)transferMode1;
- (void)setColor2:(id)arg1;
- (id)color2;
- (void)setColor1:(id)arg1;
- (id)color1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

