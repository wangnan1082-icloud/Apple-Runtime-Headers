//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CalGroup, NSColor, NSString;

@interface CalCalendar : NSObject <NSCopying>
{
    id _objectID;
    id _group;
    void *_reserved;
    NSColor *_color;
    NSString *_notes;
    NSString *_title;
    NSString *_type;
    NSString *_uid;
    BOOL _isEditable;
}

+ (id)calendarFromRemoteManagedObject:(id)arg1;
+ (id)calendar;
@property(readonly) NSString *uid; // @synthesize uid=_uid;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *notes; // @synthesize notes=_notes;
@property(copy) NSColor *color; // @synthesize color=_color;
- (id)remoteManagedCalendarFromCalendar;
@property(copy) NSString *managedObjectIDString;
@property(nonatomic) unsigned long long calendarItemTypes;
@property(retain) CalGroup *group;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly) BOOL isEditable;
- (id)initWithUID:(id)arg1 type:(id)arg2 editable:(BOOL)arg3;
- (id)init;

@end
