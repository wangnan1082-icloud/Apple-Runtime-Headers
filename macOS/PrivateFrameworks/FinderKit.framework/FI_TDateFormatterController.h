//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_TDateFormatterController : NSObject
{
    struct TNSRef<FI_TValidatingDateFormatter, void> _shortDateTimeFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _shortDateTimeFormatterRelative;
    struct TNSRef<FI_TValidatingDateFormatter, void> _shortDateOnlyFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _shortDateOnlyFormatterRelative;
    struct TNSRef<FI_TValidatingDateFormatter, void> _mediumDateTimeFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _mediumDateTimeFormatterRelative;
    struct TNSRef<FI_TValidatingDateFormatter, void> _mediumDateOnlyFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _mediumDateOnlyFormatterRelative;
    struct TNSRef<FI_TValidatingDateFormatter, void> _longDateTimeFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _longDateTimeFormatterRelative;
    struct TNSRef<FI_TValidatingDateFormatter, void> _fullDateTimeFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _fullDateTimeFormatterRelative;
    struct TNSRef<FI_TValidatingDateFormatter, void> _fullDateOnlyFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _fullDateOnlyFormatterRelative;
    struct TNSRef<FI_TValidatingDateFormatter, void> _timeOnlyFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _fileNameTimeFormatter;
    struct TNSRef<FI_TValidatingDateFormatter, void> _fileNameDateTimeFormatter;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _observers;
}

+ (id)dateFormatterController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)fileNameDateTimeFormatter;
- (id)fileNameTimeFormatter;
- (id)timeOnlyFormatter;
- (id)fullDateOnlyFormatter:(_Bool)arg1;
- (id)fullDateTimeFormatter:(_Bool)arg1;
- (id)longDateTimeFormatter:(_Bool)arg1;
- (id)mediumDateOnlyFormatter:(_Bool)arg1;
- (id)mediumDateTimeFormatter:(_Bool)arg1;
- (id)shortDateTimeFormatter:(_Bool)arg1;
- (id)shortDateOnlyFormatter:(_Bool)arg1;
- (id)init;

@end

