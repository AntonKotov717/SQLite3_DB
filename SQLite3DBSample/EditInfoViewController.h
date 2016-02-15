//
//  EditInfoViewController.h
//  SQLite3DBSample
//
//  Created by dev on 12/24/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EditInfoViewControllerDelegate
    -(void)EditingInfoWasFinished;
@end

@interface EditInfoViewController : UIViewController<UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField *txtFirstname;
@property (strong, nonatomic) IBOutlet UITextField *txtLastname;
@property (strong, nonatomic) IBOutlet UITextField *txtAge;

@property (nonatomic, strong) id<EditInfoViewControllerDelegate> delegate;

- (IBAction)saveInfo:(id)sender;

@property (nonatomic) int recordIDToEdit;

@end

