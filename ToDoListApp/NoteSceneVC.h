//
//  NoteModelVC.h
//  ToDoListApp
//
//  Created by Ashraf Mohamed on 17/07/2024.
//

#import <UIKit/UIKit.h>
#import "NSUserDefaults+CustomNoteUD.h"
NS_ASSUME_NONNULL_BEGIN

@interface NoteSceneVC : UIViewController
@property NoteModel* note;
@property int callerScene;
@property NSMutableArray<NoteModel*>* arr;
@property NSUserDefaults *ud;
@end

NS_ASSUME_NONNULL_END
